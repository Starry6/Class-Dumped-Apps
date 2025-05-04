@interface AWESearchScanGraphicSugViewControllerConfig : NSObject
@property (nonatomic) BOOL supportDarkTheme;
@property (nonatomic) AWESearchScanGraphicSearchBar searchBar;
@property (nonatomic) Q cellStyle;
@property (nonatomic) UIColor backgroundColor;
- (void)setSupportDarkTheme:;
- (BOOL)supportDarkTheme;
- (id)searchBar;
- (id)init;
- (void)setSearchBar:;
- (unsigned long long)cellStyle;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (void)setCellStyle:;
@end
