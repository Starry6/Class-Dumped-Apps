@interface BDXLynxTextInfo : NSObject
@property (nonatomic) q sign;
@property (nonatomic) q parentSign;
@property (nonatomic) BOOL ignoreFocus;
@property (nonatomic) BOOL enableTouchPseudoPropagation;
@property (nonatomic) NSInteger eventThrough;
@property (nonatomic) NSDictionary eventSet;
- (BOOL)enableTouchPseudoPropagation;
- (id)eventSet;
- (int)eventThrough;
- (BOOL)ignoreFocus;
- (id)initWithShadowNode:;
- (long long)parentSign;
- (void)setParentSign:;
- (void)setSign:;
- (long long)sign;
- (void).cxx_destruct;
@end
