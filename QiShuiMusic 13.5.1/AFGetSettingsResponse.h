@interface AFGetSettingsResponse : AFSiriResponse
@property (nonatomic) NSArray settings;
- (id)settings;
- (void)setSettings:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
