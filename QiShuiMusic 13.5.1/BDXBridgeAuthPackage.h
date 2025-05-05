@interface BDXBridgeAuthPackage : NSObject
@property (nonatomic) NSNumber packageVersion;
@property (nonatomic) q type;
@property (nonatomic) NSString channel;
@property (nonatomic) NSDictionary content;
@property (nonatomic) BDXBridgeAuthModelV2 contentV2;
@property (nonatomic) BDXOverriddenMethodPackage overriddenMethodPackage;
@property (nonatomic) BOOL bridgeAuthInfo;
@property (nonatomic) NSString namespace;
- (id)contentV2;
- (BOOL)isBridgeAuthInfo;
- (id)overriddenMethodPackage;
- (id)packageVersion;
- (void)setContentV2:;
- (void)setPackageVersion:;
- (id)validatedContentWithDict:;
- (id)content;
- (void)setChannel:;
- (void)setContent:;
- (id)channel;
- (id)initWithDictionary:;
- (void)setType:;
- (id)namespace;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
@end
