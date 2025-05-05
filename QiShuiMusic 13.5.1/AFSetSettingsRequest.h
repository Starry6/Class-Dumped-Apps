@interface AFSetSettingsRequest : AFSiriRequest
@property (nonatomic) NSArray settings;
@property (nonatomic) BOOL applyChanges;
- (id)settings;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)createResponse;
- (id)createResponseWithSettingChanges:;
- (void)_setSettings:;
- (BOOL)applyChanges;
- (void)_setApplyChanges:;
+ (BOOL)supportsSecureCoding;
@end
