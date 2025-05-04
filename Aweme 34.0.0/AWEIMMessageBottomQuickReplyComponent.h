@interface AWEIMMessageBottomQuickReplyComponent : AWEIMFlexComponent
@property (nonatomic) q exp;
@property (nonatomic) AWEIMMessageBindButtonInfoModel model;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (id)p_bgColor;
- (void)p_trackShow;
- (id)p_borderColor;
- (id)p_textColor;
- (void)p_createPresenterIfNeed;
- (void)p_trackClick:;
- (void)p_showQuickReplyList;
- (void)p_hiddenQuickReplyList;
- (double)p_borderWidth;
- (id)p_generateBtnProps:;
- (void)singleBtnTapAction:;
- (void)p_track:params:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (long long)exp;
- (void)setExp:;
+ (BOOL)canCreateComponentWithContext:;
@end
