#ifndef __ModuleParameter_h
#define __ModuleParameter_h

#include <map>
#include <string>

class ModuleParameter
{
public:
  ModuleParameter() {}
  ModuleParameter(const ModuleParameter& parameter) {}
  void operator=(const ModuleParameter& parameter) {}

  virtual void SetType(const std::string &type) {
    this->SetProperty("type", type);
  }

  virtual std::string GetType() const {
    return this->GetProperty("type");
  }
  
  virtual void SetName(const std::string &name) {
    this->SetProperty("name", name);
  }

  virtual std::string GetName() const {
    return this->GetProperty("name");
  }
  
  virtual void SetLabel(const std::string &label) {
    this->SetProperty("label", label);
  }
  
  virtual std::string GetLabel() const {
    return this->GetProperty("label");
  }

  virtual void SetDescription(const std::string &description) {
    this->SetProperty("description", description);
  }

  virtual std::string GetDescription() const {
    return this->GetProperty("description");
  }
  
  virtual void SetChannel(const std::string &channel) {
    this->SetProperty("channel", channel);
  }

  virtual std::string GetChannel() const {
    return this->GetProperty("channel");
  }
  
  virtual void SetIndex(const std::string &index) {
    this->SetProperty("index", index);
  }

  virtual std::string GetIndex() const {
    return this->GetProperty("index");
  }
  
  virtual void SetDefault(const std::string &def) {
    this->SetProperty("default", def);
  }

  virtual std::string GetDefault() const {
    return this->GetProperty("default");
  }
  
  virtual void SetLongFlag(const std::string &flag) {
    this->SetProperty("longflag", flag);
  }

  virtual std::string GetLongFlag() const {
    return this->GetProperty("longflag");
  }
  
  virtual void SetFlag(const std::string &flag){
    this->SetProperty("flag", flag);
  }

  virtual std::string GetFlag() const {
    return this->GetProperty("flag");
  }

  virtual void SetConstraints() {
    this->SetProperty("constraints", "");
  }

  virtual std::string GetConstraints() const {
    return this->GetProperty("constraints");
  }
  

protected:
  virtual void SetProperty(const std::string &key,
                           const std::string &value) {
    this->Properties[key] = value;
  }

  virtual std::string GetProperty(const std::string &key) const {
    std::map<std::string, std::string>::const_iterator it;

    it = this->Properties.find(key);
    if (it != this->Properties.end())
      {
      return it->second;
      }
    
    return std::string("");
  }

private:
  std::map<std::string, std::string> Properties;
};

#endif
