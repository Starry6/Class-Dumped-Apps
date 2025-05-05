@interface UgenFVCountdownWidget : UgenV3TextWidget
@property (nonatomic) BOOL haveHidden;
@property (nonatomic) NSString after;
- (id)after;
- (BOOL)haveHidden;
- (id)pre_fill_text;
- (void)setAfter:;
- (void)setHaveHidden:;
- (void)v3_render;
- (id)v3_videoStateUpdateWithPlayDuration:stopped:;
- (id)init;
- (void).cxx_destruct;
@end
