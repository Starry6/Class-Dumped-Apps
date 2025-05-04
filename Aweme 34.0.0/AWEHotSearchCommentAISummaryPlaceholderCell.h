@interface AWEHotSearchCommentAISummaryPlaceholderCell : UICollectionViewCell
@property (nonatomic) <AWECommonFeedCellModelProtocol> cellModel;
@property (nonatomic) AWECommonFeedSectionContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (void)updateCellLayout;
- (void)configCellWithContext:cellModel:;
- (long long)countOfAISummary;
- (id)p_createLineViewWithColor:;
- (void)p_configCircleViewsWithContainer:line:;
- (void)p_configSingleCircleWithContainer:line:needQuote:;
- (void)p_configBottomViewWithContainer:line:;
- (void)p_configQuoteImageViewWithContainer:line:;
- (id)p_createCircleViewWithSize:Color:;
- (void)p_configUI;
- (BOOL)hasVideo;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)cellModel;
@end
