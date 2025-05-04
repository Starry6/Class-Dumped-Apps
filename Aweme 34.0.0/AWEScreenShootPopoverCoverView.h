@interface AWEScreenShootPopoverCoverView : UIView
@property (nonatomic) <AWEScreenShootPopoverCoverViewDelegate> delegate;
@property (nonatomic) BOOL canPenetrate;
@property (nonatomic) NSArray canPenetrateViewArray;
@property (nonatomic) UIView triggerView;
- (void)setCanPenetrate:;
- (void)setCanPenetrateViewArray:;
- (void)setTriggerView:;
- (id)triggerView;
- (BOOL)canPenetrate;
- (id)canPenetrateViewArray;
- (BOOL)canPenetrateInViewArrayWithPoint:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setDelegate:;
@end
