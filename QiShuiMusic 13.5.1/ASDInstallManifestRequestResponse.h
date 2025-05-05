@interface ASDInstallManifestRequestResponse : ASDRequestResponse
@property (nonatomic) NSArray results;
@property (nonatomic) BOOL success;
- (id)initWithResults:;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)results;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
