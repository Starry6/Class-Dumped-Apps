@interface SFPrivacyReportTrackingTableViewCell : UITableViewCell
@property (nonatomic) UILabel domainLabel;
@property (nonatomic) UILabel domainDetailLabel;
@property (nonatomic) UILabel countLabel;
@property (nonatomic) double count;
@property (nonatomic) double maxCount;
- (void)setCount:;
- (double)maxCount;
- (void)setMaxCount:;
- (void).cxx_destruct;
- (double)count;
- (id)countLabel;
- (id)initWithDetailLabel:reuseIdentifier:;
- (void)_updateCountViews;
- (id)domainLabel;
- (id)domainDetailLabel;
@end
