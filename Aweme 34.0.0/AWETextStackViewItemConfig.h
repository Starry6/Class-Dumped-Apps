@interface AWETextStackViewItemConfig : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) UIImage starImage;
@property (nonatomic) NSString title;
- (BOOL)enable;
- (id)iconImage;
- (void)setIconImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setEnable:;
- (void)setTitle:;
- (id)starImage;
- (void)setStarImage:;
+ (id)configWithIconImage:enable:;
@end
