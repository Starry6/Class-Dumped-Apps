@interface OBImage : UIImage
@property (nonatomic) NSBundle bundle;
@property (nonatomic) NSString name;
@property (nonatomic) q style;
@property (nonatomic) UIColor tintColor;
- (void)setName:;
- (void)setStyle:;
- (id)tintColor;
- (id)bundle;
- (void).cxx_destruct;
- (void)setTintColor:;
- (id)name;
- (long long)style;
- (void)setBundle:;
- (id)_flatImageWithColor:;
- (id)imageForUserInterfaceStyle:;
- (id)_obFlatImageWithColor:;
+ (id)imageNamed:;
+ (id)imageNamed:inBundle:;
+ (id)_imageNamed:inBundle:convertToMatchInterfaceStyle:;
+ (id)_imageNameForUIInterfaceStyle:originalName:;
+ (long long)rootInterfaceStyle;
@end
