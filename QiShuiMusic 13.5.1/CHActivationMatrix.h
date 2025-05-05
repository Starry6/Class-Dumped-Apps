@interface CHActivationMatrix : NSObject
@property (nonatomic) CVNLPActivationMatrix activations;
@property (nonatomic) BOOL unlikelyHasLatinContents;
- (void).cxx_destruct;
- (id)activations;
- (id)initWithActivations:;
- (void)setActivations:;
- (BOOL)unlikelyHasLatinContents;
- (void)setUnlikelyHasLatinContents:;
@end
