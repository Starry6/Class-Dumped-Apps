@interface AWESearchSkeletonUIModel : AWEBaseApiModel
@property (nonatomic) BOOL withLoader;
@property (nonatomic) UIImage iconImageLight;
@property (nonatomic) UIImage iconImageDark;
@property (nonatomic) {CGSize=dd} iconViewSize;
@property (nonatomic) BOOL disableAnimation;
@property (nonatomic) UIColor backgroundColor;
- (id)iconImageLight;
- (id)iconImageDark;
- (BOOL)withLoader;
- (void)setWithLoader:;
- (void)setIconImageDark:;
- (void)setIconImageLight:;
- (BOOL)hasImage;
- (id)iconViewSize;
- (BOOL)disableAnimation;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (void)setIconViewSize:;
- (void)setDisableAnimation:;
@end
