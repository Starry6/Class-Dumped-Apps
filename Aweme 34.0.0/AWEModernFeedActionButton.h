@interface AWEModernFeedActionButton : UIButton
@property (nonatomic) BOOL needImageAnimation;
@property (nonatomic) BOOL needWholeAnimation;
@property (nonatomic) double realContentWidth;
@property (nonatomic) @? touchUpInsideBlock;
@property (nonatomic) @? didBecomeVoiceOverFocused;
- (void)setTouchUpInsideBlock:;
- (void)setDidBecomeVoiceOverFocused:;
- (BOOL)needImageAnimation;
- (void)_onTouchUpInside;
- (void)setNeedImageAnimation:;
- (BOOL)needWholeAnimation;
- (id)didBecomeVoiceOverFocused;
- (void)setNeedWholeAnimation:;
- (double)realContentWidth;
- (void)setRealContentWidth:;
- (id)init;
- (BOOL)pointInside:withEvent:;
- (void)touchesCancelled:withEvent:;
- (id)imageRectForContentRect:;
- (id)titleRectForContentRect:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)layoutSubviews;
- (void)accessibilityElementDidBecomeFocused;
- (id)touchUpInsideBlock;
@end
