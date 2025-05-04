@interface AWEIMChatCellUnReadWrapperView : UIView
@property (nonatomic) UIView dotView;
@property (nonatomic) AWEIMUnreadDotView unreadView;
@property (nonatomic) q type;
@property (nonatomic) q unreadCount;
@property (nonatomic) MASConstraint dotConstraint;
@property (nonatomic) MASConstraint unreadConstraint;
@property (nonatomic) MASConstraint oldWidthConstraint;
- (double)p_adjustUnreadViewFontToMatchTabbar:;
- (void)setDotConstraint:;
- (void)setUnreadConstraint:;
- (id)dotConstraint;
- (id)unreadConstraint;
- (void)setOldWidthConstraint:;
- (id)unreadView;
- (id)oldWidthConstraint;
- (void)updatetype:unreadCount:enableMsgTabUIOpt:;
- (void)setUnreadView:;
- (long long)unreadCount;
- (id)init;
- (void)setUnreadCount:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)dotView;
- (void)setDotView:;
@end
