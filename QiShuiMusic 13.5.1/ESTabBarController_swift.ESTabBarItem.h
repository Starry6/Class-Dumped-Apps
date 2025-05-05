@interface ESTabBarController_swift.ESTabBarItem : UITabBarItem
@property (nonatomic) NSString title;
@property (nonatomic) UIImage image;
@property (nonatomic) UIImage selectedImage;
@property (nonatomic) NSString badgeValue;
@property (nonatomic) UIColor badgeColor;
@property (nonatomic) q tag;
- (id)badgeValue;
- (long long)tag;
- (id)init;
- (void)setBadgeColor:;
- (void)setImage:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)setTag:;
- (id)title;
- (id)badgeColor;
- (void).cxx_destruct;
- (void)setBadgeValue:;
- (id)image;
- (void)setSelectedImage:;
- (id)selectedImage;
@end
