@interface AWEECOMIMCustomButton : UIButton
@property (nonatomic) q layoutStyle;
@property (nonatomic) double space;
@property (nonatomic) {CGSize=dd} fixedImageSize;
- (id)fixedImageSize;
- (void)setFixedImageSize:;
- (void)setLayoutStyle:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (double)space;
- (void)setSpace:;
@end
