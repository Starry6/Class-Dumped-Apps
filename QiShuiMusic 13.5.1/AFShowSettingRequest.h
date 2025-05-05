@interface AFShowSettingRequest : AFSiriRequest
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)createResponse;
- (long long)settingType;
- (id)_initWithSettingType:;
+ (BOOL)supportsSecureCoding;
@end
