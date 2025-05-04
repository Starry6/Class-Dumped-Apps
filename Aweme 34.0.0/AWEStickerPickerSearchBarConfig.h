@interface AWEStickerPickerSearchBarConfig : NSObject
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIColor tintColor;
@property (nonatomic) UIColor searchFiledBackgroundColor;
@property (nonatomic) UIImage lensImage;
@property (nonatomic) UIImage clearImage;
@property (nonatomic) double searchBarHeight;
@property (nonatomic) UIColor lensImageTintColor;
- (id)searchFiledBackgroundColor;
- (id)lensImage;
- (id)lensImageTintColor;
- (void)setSearchFiledBackgroundColor:;
- (void)setLensImage:;
- (void)setLensImageTintColor:;
- (void)setClearImage:;
- (double)searchBarHeight;
- (void)setSearchBarHeight:;
- (void)setTintColor:;
- (id)clearImage;
- (id)init;
- (id)tintColor;
- (void)setTextColor:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)textColor;
+ (id)sharedConfig;
@end
