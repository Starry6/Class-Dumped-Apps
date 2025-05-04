@interface AWELiveStreamSearchADTagElement : AWELiveLeftElement
@property (nonatomic) UIView lynxContainer;
@property (nonatomic) UIView<AWEAdLearnMoreLynxButton> adLearnMoreLynxButton;
@property (nonatomic) double lynxCardBottomOffset;
@property (nonatomic) BOOL lynxButtonLoadFail;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (BOOL)shouldActivateElementWithData:;
- (id)lynxContainer;
- (void)setLynxContainer:;
- (void)preloadElement;
- (double)lynxCardBottomOffset;
- (BOOL)shouldShowLiveCommerceCard:;
- (void)showAdLiveLynxButton;
- (id)adLearnMoreLynxButton;
- (void)addAdLearnMoreLynxButton;
- (void)updateAdLearnMoreLynxButtonWithModel;
- (void)updateLynxRawDataWithAuthorInfo;
- (void)appendLynxRawAdDataWithSearchCommonParams;
- (void)setLynxButtonLoadFail:;
- (BOOL)lynxButtonLoadFail;
- (void)resetAdLiveLynxButton;
- (void)setLynxCardBottomOffset:;
- (void)setAdLearnMoreLynxButton:;
- (void)viewDidLoad;
- (unsigned long long)priority;
- (void)setData:;
- (void).cxx_destruct;
@end
