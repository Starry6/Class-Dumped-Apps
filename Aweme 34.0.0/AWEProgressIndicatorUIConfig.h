@interface AWEProgressIndicatorUIConfig : NSObject
@property (nonatomic) AWEProgressUIContainerConfig containerConfig;
@property (nonatomic) AWEProgressUITextConfig leftTextConfig;
@property (nonatomic) AWEProgressUITextConfig rightTextConfig;
@property (nonatomic) Q separatorType;
@property (nonatomic) UIImage seperatorImage;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) double marginBetweenViews;
@property (nonatomic) BOOL shouldShowHour;
- (id)containerConfig;
- (void)setContainerConfig:;
- (id)seperatorImage;
- (void)setSeperatorImage:;
- (BOOL)shouldShowHour;
- (id)leftTextConfig;
- (id)rightTextConfig;
- (double)marginBetweenViews;
- (void)setLeftTextConfig:;
- (void)setRightTextConfig:;
- (void)setMarginBetweenViews:;
- (void)setShouldShowHour:;
- (void).cxx_destruct;
- (void)setImageSize:;
- (id)imageSize;
- (unsigned long long)separatorType;
- (void)setSeparatorType:;
@end
