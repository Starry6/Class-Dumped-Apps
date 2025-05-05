@interface CUIPSDImageLayer : CUIPSDLayer
@property (nonatomic) ^{CGImage=} cgImageRef;
- (void)dealloc;
- (id)initWithCGImageRef:;
- (id)cgImageRef;
@end
