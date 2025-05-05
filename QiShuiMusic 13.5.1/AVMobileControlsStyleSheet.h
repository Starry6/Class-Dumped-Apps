@interface AVMobileControlsStyleSheet : NSObject
@property (nonatomic) UITraitCollection traitCollection;
@property (nonatomic) {UIEdgeInsets=dddd} landscapeFullscreenInsets;
@property (nonatomic) {UIEdgeInsets=dddd} portraitFullscreenInsets;
@property (nonatomic) {UIEdgeInsets=dddd} embeddedInlineInsets;
@property (nonatomic) double standardPaddingFullScreen;
@property (nonatomic) double standardPaddingInline;
- (void)setTraitCollection:;
- (id)embeddedInlineInsets;
- (id)landscapeFullscreenInsets;
- (double)standardPaddingFullScreen;
- (id)traitCollection;
- (double)standardPaddingInline;
- (void).cxx_destruct;
- (id)initWithTraitCollection:;
- (id)portraitFullscreenInsets;
- (id)playbackControlsViewLayoutMarginsForView:keyboardHeight:isFullScreen:;
@end
