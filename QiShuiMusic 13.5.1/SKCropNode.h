@interface SKCropNode : SKNode
@property (nonatomic) BOOL prefersAlphaMask;
@property (nonatomic) BOOL invertMask;
@property (nonatomic) SKNode maskNode;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)isEqualToNode:;
- (id)_makeBackingNode;
- (void)_didMakeBackingNode;
- (void)setMaskNode:;
- (id)maskNode;
- (void)useAlphaMask:;
- (BOOL)prefersAlphaMask;
- (void)setPrefersAlphaMask:;
- (BOOL)invertMask;
- (void)setInvertMask:;
+ (BOOL)supportsSecureCoding;
@end
