@interface AWESearchScanGraphicSearchBarConfig : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) NSString imageURL;
@property (nonatomic) BOOL supportDarkTheme;
@property (nonatomic) NSString popoverToken;
@property (nonatomic) BOOL supportPopover;
@property (nonatomic) NSString placeHolder;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) NSArray gradientColor;
- (void)setSupportDarkTheme:;
- (BOOL)supportDarkTheme;
- (void)setSupportPopover:;
- (id)popoverToken;
- (void)setPopoverToken:;
- (BOOL)supportPopover;
- (id)init;
- (id)image;
- (void)setImage:;
- (id)backgroundColor;
- (id)imageURL;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (void)setImageURL:;
- (id)gradientColor;
- (void)setGradientColor:;
- (void)setPlaceHolder:;
- (id)placeHolder;
@end
