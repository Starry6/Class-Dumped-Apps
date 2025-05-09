@interface AWEGrouponC2TransformerView : UIView
@property (nonatomic) AWEGrouponC2TransformerSkeletonView skeletonView;
@property (nonatomic) double skeletonHeight;
@property (nonatomic) UITapGestureRecognizer tap;
@property (nonatomic) <AWEGrouponC2ContainerTransformerSectionProtocol> child;
@property (nonatomic) UIViewController parentVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)skeletonView;
- (void)setSkeletonView:;
- (void)addChildVC;
- (double)skeletonHeight;
- (void)setSkeletonHeight:;
- (void)addSkeleton;
- (void)removeSkeleton;
- (void)emptyTap:;
- (void)setSkeletonFrame:;
- (void)config;
- (id)initWithFrame:;
- (id)child;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)tap;
- (void)setTap:;
- (void)setChild:;
- (id)parentVC;
- (void)setParentVC:;
@end
