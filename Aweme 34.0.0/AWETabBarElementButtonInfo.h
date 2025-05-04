@interface AWETabBarElementButtonInfo : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) UIImage selectImage;
@property (nonatomic) UIImage unSelectedImage;
- (id)selectImage;
- (id)unSelectedImage;
- (void)setSelectImage:;
- (void)setUnSelectedImage:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
@end
