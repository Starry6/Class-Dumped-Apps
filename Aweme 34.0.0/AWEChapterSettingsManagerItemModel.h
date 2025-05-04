@interface AWEChapterSettingsManagerItemModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) BOOL isSwitchButton;
@property (nonatomic) BOOL isSwitchOn;
@property (nonatomic) @? switchButtonTapped;
@property (nonatomic) double cellHeight;
- (void)setIsSwitchOn:;
- (BOOL)isSwitchButton;
- (void)setIsSwitchButton:;
- (id)switchButtonTapped;
- (void)setSwitchButtonTapped:;
- (id)subtitle;
- (void)setSubtitle:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (double)cellHeight;
- (void)setCellHeight:;
- (BOOL)isSwitchOn;
@end
