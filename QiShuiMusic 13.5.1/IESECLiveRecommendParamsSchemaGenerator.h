@interface IESECLiveRecommendParamsSchemaGenerator : NSObject
@property (nonatomic) IESECLiveContext liveContext;
- (void)setLiveContext:;
- (id)appendRecommendParamsToSchemaIfNeeded:;
- (id)getRecommendInfo;
- (id)initWithLiveContext:;
- (id)liveContext;
- (id)p_appendRecommendToComponentsDic:;
- (void).cxx_destruct;
@end
