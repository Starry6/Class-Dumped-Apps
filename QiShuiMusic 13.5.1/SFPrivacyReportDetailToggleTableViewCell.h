@interface SFPrivacyReportDetailToggleTableViewCell : UITableViewCell
@property (nonatomic) q detailType;
@property (nonatomic) <SFPrivacyReportDetailToggleTableViewCellDelegate> delegate;
@property (nonatomic) BOOL useCurrentWebsiteHeader;
- (id)initWithStyle:reuseIdentifier:;
- (void)setDelegate:;
- (void)_updateTitle;
- (id)delegate;
- (void).cxx_destruct;
- (void)_addSegmentForDetailType:;
- (void)_selectDetailType:;
- (void)setDetailType:;
- (void)setUseCurrentWebsiteHeader:;
- (long long)detailType;
- (BOOL)useCurrentWebsiteHeader;
@end
