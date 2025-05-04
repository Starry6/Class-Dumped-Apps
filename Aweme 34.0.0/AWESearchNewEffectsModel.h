@interface AWESearchNewEffectsModel : AWEBaseApiModel
@property (nonatomic) NSArray effectsDetailArray;
@property (nonatomic) NSArray effectsVideoArray;
@property (nonatomic) BOOL hasMoreVideo;
@property (nonatomic) BOOL hasMoreEffects;
- (id)effectsDetailArray;
- (void)setEffectsDetailArray:;
- (id)effectsVideoArray;
- (void)setEffectsVideoArray:;
- (BOOL)hasMoreVideo;
- (void)setHasMoreVideo:;
- (BOOL)hasMoreEffects;
- (void)setHasMoreEffects:;
- (void).cxx_destruct;
+ (id)effectsDetailArrayJSONTransformer;
+ (id)effectsVideoArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
