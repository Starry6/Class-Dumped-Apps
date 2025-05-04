@interface AWEUGRecommendInfoServiceImpl : HTSService
@property (nonatomic) MMKV ugRecommendInfoStorage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)recordRecommendInfo:params:forType:;
- (id)retrieveRecommendInfoForType:;
- (id)retrieveRecommendParamsForType:;
- (BOOL)isValidUgInfo:;
- (id)ugRecommendInfoStorage;
- (id)infoKeyForType:;
- (id)originSchemaKeyForType:;
- (void)clearRecommendInfoForType:;
- (void)setUgRecommendInfoStorage:;
- (void).cxx_destruct;
@end
