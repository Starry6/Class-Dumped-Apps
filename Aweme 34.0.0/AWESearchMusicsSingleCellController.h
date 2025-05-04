@interface AWESearchMusicsSingleCellController : AWESearchMusicsViewController
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) Q type;
@property (nonatomic) AWESearchAllHeaderFooterView header;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enterFrom;
- (id)logPassback;
- (void)setLogPassback:;
- (void)refreshWithData:keyword:hasMore:feedbackUrl:;
- (void)trackFeedbackViewShowEvent;
- (void)trackFeedbackViewClickEvent;
- (void)footerViewTapped;
- (id)header;
- (id)init;
- (void)viewDidLoad;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setHeader:;
@end
