@interface UIViewInProcessAnimationTickEntry : NSObject
@property (nonatomic) {CAFrameRateRange=fff} preferredFrameRateRange;
@property (nonatomic) I updateReason;
@property (nonatomic) BOOL velocityUsableForVFD;
@property (nonatomic) BOOL allowsVFD;
@property (nonatomic) @? callback;
- (id)callback;
- (unsigned int)updateReason;
- (BOOL)allowsVFD;
- (id)preferredFrameRateRange;
- (BOOL)isvelocityUsableForVFD;
- (void).cxx_destruct;
- (id)initWithPreferredFrameRateRange:updateReason:velocityUsableForVFD:callback:;
@end
