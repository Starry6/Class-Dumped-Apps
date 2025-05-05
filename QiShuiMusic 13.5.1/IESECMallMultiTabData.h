@interface IESECMallMultiTabData : MTLModel
@property (nonatomic) NSString defaultTabID;
@property (nonatomic) NSArray tabList;
@property (nonatomic) NSString ecomSceneId;
@property (nonatomic) double defaultTabHeaderHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEcomSceneId:;
- (id)tabList;
- (double)defaultTabHeaderHeight;
- (id)defaultTabID;
- (id)ecomSceneId;
- (void)setDefaultTabHeaderHeight:;
- (void)setDefaultTabID:;
- (void)setTabList:;
- (void).cxx_destruct;
+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
