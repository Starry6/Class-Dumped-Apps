@interface IESECSliceXFrameAnimationDelegate : NSObject
@property (nonatomic) UIView<IESECSliceXElementView> elementView;
@property (nonatomic) NSString animationName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setElementView:;
- (id)elementView;
- (id)initWithElementView:animationName:;
- (void)setAnimationName:;
- (void)animationDidStop:finished:;
- (void).cxx_destruct;
- (id)animationName;
@end
