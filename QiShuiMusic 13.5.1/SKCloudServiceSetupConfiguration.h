@interface SKCloudServiceSetupConfiguration : NSObject
@property (nonatomic) NSString applicationIdentifier;
@property (nonatomic) NSString applicationVersion;
@property (nonatomic) BOOL targetsFinanceApplication;
@property (nonatomic) BOOL forPublicSDK;
- (id)applicationIdentifier;
- (id)init;
- (void)setApplicationIdentifier:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)applicationVersion;
- (void).cxx_destruct;
- (id)description;
- (void)setApplicationVersion:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)targetsFinanceApplication;
- (void)setTargetsFinanceApplication:;
- (BOOL)forPublicSDK;
- (void)setForPublicSDK:;
+ (BOOL)supportsSecureCoding;
@end
