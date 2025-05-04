@interface AWELiveShelfCustomButton : UIButton
@property (nonatomic) {UIEdgeInsets=dddd} hitTestEdgeInsets;
- (id)hitTestEdgeInsets;
- (BOOL)pointInside:withEvent:;
- (void)setHitTestEdgeInsets:;
- (id)initWithFrame:;
@end
