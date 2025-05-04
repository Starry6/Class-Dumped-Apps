@interface AWESearchSugTableViewFooter : UITableViewHeaderFooterView
@property (nonatomic) UIButton feedbackButton;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString gid;
@property (nonatomic) NSString logid;
@property (nonatomic) NSString query;
@property (nonatomic) NSArray recomWords;
@property (nonatomic) @? feedbackPanelShowBlock;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)logid;
- (void)configureUI;
- (void)setLogid:;
- (void)feedbackButtonClicked;
- (id)recomWords;
- (id)feedbackPanelShowBlock;
- (void)trackFeedbackEntranceClick;
- (void)setRecomWords:;
- (void)setFeedbackPanelShowBlock:;
- (id)gid;
- (void)setGid:;
- (void)setQuery:;
- (id)query;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)feedbackButton;
- (void)setFeedbackButton:;
+ (id)identifier;
@end
