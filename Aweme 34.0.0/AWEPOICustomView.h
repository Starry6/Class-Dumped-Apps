@interface AWEPOICustomView : UIView
@property (nonatomic) {CGSize=dd} preSize;
@property (nonatomic) {CGSize=dd} custom_intrinsicContentSize;
@property (nonatomic) @? layoutSubviewsCallback;
@property (nonatomic) @? sizeDidChangeCallback;
- (void)setPreSize:;
- (id)preSize;
- (id)custom_intrinsicContentSize;
- (id)layoutSubviewsCallback;
- (id)sizeDidChangeCallback;
- (void)setCustom_intrinsicContentSize:;
- (void)setLayoutSubviewsCallback:;
- (void)setSizeDidChangeCallback:;
- (id)intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
