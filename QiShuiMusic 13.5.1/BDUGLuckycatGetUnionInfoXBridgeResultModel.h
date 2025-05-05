@interface BDUGLuckycatGetUnionInfoXBridgeResultModel : BDXBridgeModel
@property (nonatomic) NSString fromAppId;
@property (nonatomic) NSString fromActHash;
@property (nonatomic) NSString currentAppId;
@property (nonatomic) NSString currentActHash;
- (void)setFromActHash:;
- (id)currentActHash;
- (id)currentAppId;
- (id)fromActHash;
- (id)fromAppId;
- (void)setCurrentActHash:;
- (void)setCurrentAppId:;
- (void)setFromAppId:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
