@interface AWEHPMallTabJumpModel : NSObject
@property (nonatomic) AWEHPTabJumpModelContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tabJumpGuideShowWithModel:withComponent:withTrackParams:;
- (BOOL)shouldLoadTabJumpGuide;
- (id)handleJumpInfoModelIfNeedWithModel:;
- (id)landingUrlWithModel:withUrlString:withComponent:;
- (void)landingUrlCompletion:;
- (id)aAWEHPMallTabJumpModelDOUYINLiteAdapter;
- (id)createJumpToMallTrackParamsWithMethod:withModel:;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (Class)aAWEHPMallTabJumpModelDOUYINLiteAdapterClass;
@end
