@interface BDUPCButtonConfig : BDUPCViewConfig
@property (nonatomic) NSString title;
@property (nonatomic) UIColor titleColor;
@property (nonatomic) UIFont titleFont;
@property (nonatomic) NSNumber contentHorizontalAlignment;
@property (nonatomic) UIImage image;
@property (nonatomic) UIColor tintColor;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) NSNumber borderWidth;
- (void)setBorderColor:;
- (id)titleFont;
- (id)borderColor;
- (void)setTitleFont:;
- (id)tintColor;
- (void)setImage:;
- (void)setTitleColor:;
- (void)setTitle:;
- (void)setContentHorizontalAlignment:;
- (id)borderWidth;
- (void)setBorderWidth:;
- (id)titleColor;
- (id)title;
- (void).cxx_destruct;
- (void)setTintColor:;
- (id)image;
- (id)contentHorizontalAlignment;
@end
