@interface PRImageView : UIView
@property (nonatomic) UIImage image;
@property (nonatomic) BOOL circular;
- (void)drawRect:;
- (BOOL)isCircular;
- (void)setImage:;
- (id)initWithFrame:;
- (void)setCircular:;
- (void).cxx_destruct;
- (id)image;
@end
