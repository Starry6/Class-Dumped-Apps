@interface BWRenderListAnimator : NSObject
@property (nonatomic) BWRenderList renderList;
@property (nonatomic) BWRenderListParameters parameters;
@property (nonatomic) BWRenderList initialRenderList;
@property (nonatomic) BWRenderListParameters initialParameters;
@property (nonatomic) BWRenderList finalRenderList;
@property (nonatomic) BWRenderListParameters finalParameters;
@property (nonatomic) BOOL prepared;
@property (nonatomic) BOOL completed;
- (void)dealloc;
- (BOOL)isPrepared;
- (id)parameters;
- (BOOL)isCompleted;
- (id)initWithInitialParameters:initialRenderList:finalParameters:finalRenderList:animation:;
- (void)prepareWithInputVideoFormat:inputDepthFormat:;
- (id)interpolateParameters;
- (id)renderList;
- (id)initialRenderList;
- (id)initialParameters;
- (id)finalRenderList;
- (id)finalParameters;
@end
