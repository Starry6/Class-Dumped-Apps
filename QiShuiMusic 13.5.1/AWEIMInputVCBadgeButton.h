@interface AWEIMInputVCBadgeButton : AWEButton
@property (nonatomic) UIView badgeBgView;
@property (nonatomic) UIView badgeDotView;
@property (nonatomic) NSMutableDictionary imageMap;
- (void)setBadgeBgView:;
- (id)initWithDefault;
- (id)badgeBgView;
- (id)badgeDotView;
- (id)imageMap;
- (void)p_updateBadgeColorInDark:;
- (void)reloadButtonTheme:;
- (void)setBadgeDotView:;
- (void)setImageMap:;
- (void)setImageName:forState:;
- (void)showBadge:;
- (BOOL)hasBadge;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (void)sendAction:to:forEvent:;
@end
