@interface AFGetSettingsRequest : AFSiriRequest
@property (nonatomic) NSArray settings;
- (id)settings;
- (void)setSettings:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)createResponse;
+ (BOOL)supportsSecureCoding;
@end
