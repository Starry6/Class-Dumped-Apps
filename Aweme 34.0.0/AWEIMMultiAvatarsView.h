@interface AWEIMMultiAvatarsView : UIImageView
@property (nonatomic) double width;
@property (nonatomic) BOOL isNotch;
@property (nonatomic) UIView bgMaskView;
@property (nonatomic) UIImageView moreView;
- (void)__setupUI;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (id)moreView;
- (void)setMoreView:;
- (id)initWithWidth:isNotch:;
- (BOOL)isNotch;
- (void)setIsNotch:;
- (void)updateLayer;
- (void)setWidth:;
- (double)width;
- (void).cxx_destruct;
- (void)updateWithStyle:;
@end
