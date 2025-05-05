@interface IESBridgeAuthPackage : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString channel;
@property (nonatomic) NSDictionary content;
@property (nonatomic) IESOverriddenMethodPackage overriddenMethodPackage;
@property (nonatomic) BOOL bridgeAuthInfo;
@property (nonatomic) NSNumber packageVersion;
@property (nonatomic) NSString namespace;
- (BOOL)isBridgeAuthInfo;
- (id)overriddenMethodPackage;
- (id)packageVersion;
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
