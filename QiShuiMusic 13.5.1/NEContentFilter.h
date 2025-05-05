@interface NEContentFilter : NSObject
@property (nonatomic) BOOL enableManualMode;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NEFilterProviderConfiguration provider;
@property (nonatomic) NEPerApp perApp;
@property (nonatomic) q grade;
- (void)setProvider:;
- (BOOL)checkValidityAndCollectErrors:;
- (id)init;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (id)provider;
- (long long)grade;
- (void)encodeWithCoder:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)setGrade:;
- (id)copyWithZone:;
- (BOOL)isEnabled;
- (id)perApp;
- (void)setPerApp:;
- (BOOL)enableManualMode;
- (void)setEnableManualMode:;
+ (BOOL)supportsSecureCoding;
@end
