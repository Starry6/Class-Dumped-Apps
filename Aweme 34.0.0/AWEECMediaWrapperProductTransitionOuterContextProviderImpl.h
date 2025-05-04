@interface AWEECMediaWrapperProductTransitionOuterContextProviderImpl : NSObject
@property (nonatomic) NSString transitionItemId;
@property (nonatomic) UIView transitionView;
@property (nonatomic) double ipadSizeScale;
@property (nonatomic) AWEECMediaWrapperElement mediaWrapperElement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)zoomTransitionStartViewToInner:;
- (double)ipadSizeScale;
- (double)transitionCornerRadius;
- (BOOL)zoomOuterWithShrink;
- (void)modernTransitionInDidComplete;
- (void)clearFirstCut;
- (void)setMediaWrapperElement:;
- (void)setTransitionItemId:;
- (id)transitionItemId;
- (id)mediaWrapperElement;
- (void)setIpadSizeScale:;
- (void).cxx_destruct;
- (id)transitionView;
- (void)setTransitionView:;
@end
