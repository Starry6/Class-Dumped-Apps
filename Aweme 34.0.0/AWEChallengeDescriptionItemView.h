@interface AWEChallengeDescriptionItemView : UIView
@property (nonatomic) UILabel colonLabel;
@property (nonatomic) YYLabel descriptionLabel;
@property (nonatomic) UIView downloadContainerView;
@property (nonatomic) UIImageView downloadIcon;
@property (nonatomic) UILabel downloadLabel;
@property (nonatomic) double titleWidth;
@property (nonatomic) AWEChallengeDescriptionItem item;
@property (nonatomic) AWEChallengeDownloadInfoModel downloadInfo;
@property (nonatomic) <AWEChallengeDescriptionItemViewDelegate> delegate;
- (void)setUpWithDescriptionItem:titleWidth:;
- (id)colonLabel;
- (void)setTitleWidth:;
- (void)setDescriptionItemWithUrlTransfer:;
- (void)setColonLabel:;
- (id)downloadContainerView;
- (id)downloadIcon;
- (void)updateSubviewWith:;
- (void)updateDescriptionLabelWithItem:;
- (void)updateDownloadContainerWith:;
- (BOOL)needAppendEmptyLineWithDownloadComponent:;
- (id)appendEmptyLineForDownloadContainer:;
- (id)labelAttributedStringWith:textColor:;
- (id)calDownloadContainerOffset:;
- (double)calDownloadContainerWidth:;
- (double)calDownloadContainerOffsetX:descLimitWidth:;
- (double)calDownloadContainerOffsetY:descLimitWidth:;
- (void)downloadTapGR:;
- (void)setDownloadContainerView:;
- (void)setDownloadIcon:;
- (id)delegate;
- (void)setDescriptionLabel:;
- (void)drawRect:;
- (void)setItem:;
- (id)initWithFrame:;
- (id)item;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (void)setDelegate:;
- (void)setupSubviews;
- (double)titleWidth;
- (id)downloadInfo;
- (void)setDownloadInfo:;
- (id)downloadLabel;
- (void)setDownloadLabel:;
@end
