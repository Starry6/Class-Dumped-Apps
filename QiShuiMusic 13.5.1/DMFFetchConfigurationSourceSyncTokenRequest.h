@interface DMFFetchConfigurationSourceSyncTokenRequest : DMFTaskRequest
@property (nonatomic) NSString configurationSource;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)configurationSource;
- (void).cxx_destruct;
- (void)setConfigurationSource:;
+ (BOOL)supportsSecureCoding;
@end
