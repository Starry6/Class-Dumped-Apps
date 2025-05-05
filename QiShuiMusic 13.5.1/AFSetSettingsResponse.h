@interface AFSetSettingsResponse : AFSiriResponse
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_initWithRequest:settingChanges:;
- (id)settingChanges;
+ (BOOL)supportsSecureCoding;
@end
