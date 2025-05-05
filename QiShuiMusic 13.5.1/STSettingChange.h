@interface STSettingChange : STSiriModelObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSettingType:valueBeforeUpdate:valueAfterUpdate:;
- (long long)settingType;
- (id)valueBeforeUpdate;
- (id)valueAfterUpdate;
+ (BOOL)supportsSecureCoding;
@end
