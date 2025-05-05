@interface IESECRelationTransparentView : UIView
@property (nonatomic) @? layoutSubviewsProxy;
@property (nonatomic) BOOL hitTestResponds;
- (BOOL)isHitTestResponds;
- (id)layoutSubviewsProxy;
- (void)setHitTestResponds:;
- (void)setLayoutSubviewsProxy:;
- (void)layoutSubviews;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)view;
@end
