@interface IESIMSaaSAWEUICommonSearchBarConfig : NSObject
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIColor tintColor;
@property (nonatomic) UIColor searchFiledBackgroundColor;
@property (nonatomic) UIImage lensImage;
@property (nonatomic) UIImage clearImage;
@property (nonatomic) double searchBarHeight;
@property (nonatomic) UIColor lensImageTintColor;
- (double)searchBarHeight;
- (id)lensImage;
- (id)lensImageTintColor;
- (id)searchFiledBackgroundColor;
- (void)setClearImage:;
- (void)setLensImage:;
- (void)setLensImageTintColor:;
- (void)setSearchBarHeight:;
- (void)setSearchFiledBackgroundColor:;
- (id)clearImage;
- (id)init;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (id)tintColor;
- (void)setTextColor:;
- (void).cxx_destruct;
- (void)setTintColor:;
- (id)textColor;
+ (id)sharedConfig;
@end
