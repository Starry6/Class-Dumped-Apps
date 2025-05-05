@interface TTVideoEngineAVAIBarrager : NSObject
@property (nonatomic) <TTVideoEngineAIBarrageDelegate> delegate;
@property (nonatomic) TTVideoEngine engine;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithVideoEngine:;
- (void)onMaskInfoCallBack:pts:;
- (void)resetBarrageDelegate:;
- (id)engine;
- (void)setEngine:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
