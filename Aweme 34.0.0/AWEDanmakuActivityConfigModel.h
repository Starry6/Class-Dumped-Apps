@interface AWEDanmakuActivityConfigModel : AWEBaseApiModel
@property (nonatomic) NSArray pendants;
@property (nonatomic) NSArray eggs;
- (id)pendants;
- (id)eggs;
- (id)downloadResourcesModels;
- (void)setPendants:;
- (void)setEggs:;
- (void).cxx_destruct;
+ (id)pendantsJSONTransformer;
+ (id)eggsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
