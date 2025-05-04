@interface AWEScreenshotPanelConfigItemModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL isSwitchButton;
@property (nonatomic) BOOL isSwitchOn;
@property (nonatomic) @? switchButtonTapped;
@property (nonatomic) @? refreshCellBlock;
- (void)setIsSwitchOn:;
- (void)refreshCell;
- (BOOL)isSwitchButton;
- (void)setIsSwitchButton:;
- (id)switchButtonTapped;
- (void)setSwitchButtonTapped:;
- (id)refreshCellBlock;
- (void)setRefreshCellBlock:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (BOOL)isSwitchOn;
@end
