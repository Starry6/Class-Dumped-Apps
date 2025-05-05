@interface SFPrivacyReportExplanationTableViewCell : UITableViewCell
@property (nonatomic) BOOL expanded;
@property (nonatomic) <SFPrivacyReportExplanationTableViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithStyle:reuseIdentifier:;
- (BOOL)isExpanded;
- (void)setDelegate:;
- (void)setExpanded:;
- (id)delegate;
- (BOOL)textView:shouldInteractWithURL:inRange:interaction:;
- (void).cxx_destruct;
- (id)_separatorFrame;
- (void)privacyProxyStateChanged:;
- (void)_toggleExpanded:;
@end
