@interface AWEASMusicHistorySuggestionTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel displayLabel;
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) @? deleteBtnClickCallback;
@property (nonatomic) NSString query;
- (void)switchDarkMode;
- (void)configWithQuery:iconImageName:deleteButtonImageName:;
- (id)deleteBtnClickCallback;
- (void)handleDeleteButtonClick:;
- (void)configFindMoreMusicCell;
- (void)configMusicSearchHistoryCellWithMusicTitle:;
- (void)setDeleteBtnClickCallback:;
- (void)setDeleteButton:;
- (void)setQuery:;
- (id)query;
- (id)iconView;
- (void)setIconView:;
- (id)initWithStyle:reuseIdentifier:;
- (id)deleteButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setDisplayLabel:;
- (id)displayLabel;
+ (id)identifier;
@end
