@interface BUNetworkRatingVM : NSObject
@property (nonatomic) @? ratingFinishBlock;
@property (nonatomic) BUPolicyCenter policy;
@property (nonatomic) BOOL envReady;
- (BOOL)envReady;
- (id)initWithURL:completion:;
- (id)ratingFinishBlock;
- (void)setEnvReady:;
- (void)setRatingFinishBlock:;
- (void)setUpJSContext;
- (void)startRating:completion:;
- (void)setPolicy:;
- (id)policy;
- (void).cxx_destruct;
@end
