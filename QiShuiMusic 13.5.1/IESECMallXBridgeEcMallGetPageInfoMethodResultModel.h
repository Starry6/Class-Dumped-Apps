@interface IESECMallXBridgeEcMallGetPageInfoMethodResultModel : BDXBridgeModel
@property (nonatomic) NSString lastScene;
@property (nonatomic) NSString groupId;
@property (nonatomic) NSNumber isVisible;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSDictionary recommendInfo;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)recommendInfo;
- (void)setLastScene:;
- (void)setRecommendInfo:;
- (void)setIsVisible:;
- (id)groupId;
- (void).cxx_destruct;
- (id)lastScene;
- (id)isVisible;
- (void)setGroupId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
