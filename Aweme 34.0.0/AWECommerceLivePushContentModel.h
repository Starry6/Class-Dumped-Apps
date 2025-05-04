@interface AWECommerceLivePushContentModel : MTLModel
@property (nonatomic) NSArray adInfos;
@property (nonatomic) NSArray liveItems;
@property (nonatomic) NSString componenteExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adInfos;
- (id)liveItems;
- (void)setAdInfos:;
- (void)setLiveItems:;
- (id)componenteExtra;
- (void)setComponenteExtra:;
- (void).cxx_destruct;
+ (id)adInfosJSONTransformer;
+ (id)liveItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
