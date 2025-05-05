@interface TSPKDetectTrigger : NSObject
@property (nonatomic) NSString interestAPIType;
@property (nonatomic) @? detectAction;
- (BOOL)canHandelEvent:;
- (id)interestAPIType;
- (void)decodeParams:;
- (id)detectAction;
- (id)initWithParams:apiType:;
- (void)setDetectAction:;
- (void)setInterestAPIType:;
- (void)updateWithParams:;
- (void)setup;
- (void).cxx_destruct;
@end
