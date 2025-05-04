@interface AWENearbyTransformerItemViewModel : AWEBaseViewModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString background;
@property (nonatomic) NSArray icons;
@property (nonatomic) NSArray backgroundImg;
- (id)backgroundImg;
- (void)setBackgroundImg:;
- (id)icons;
- (void)setSubTitle:;
- (id)subTitle;
- (id)background;
- (void)setBackground:;
- (void)setIcons:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)updateWithModel:;
@end
