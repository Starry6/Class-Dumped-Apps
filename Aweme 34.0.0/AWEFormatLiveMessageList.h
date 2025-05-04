@interface AWEFormatLiveMessageList : IESLiveMessageListView
@property (nonatomic) @? widthDidChangedBlock;
@property (nonatomic) double originWidth;
- (void)setOriginWidth:;
- (double)originWidth;
- (id)widthDidChangedBlock;
- (void)refreshUnreadTipView:;
- (void)setWidthDidChangedBlock:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
