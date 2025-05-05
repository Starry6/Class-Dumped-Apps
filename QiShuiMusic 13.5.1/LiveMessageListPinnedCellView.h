@interface LiveMessageListPinnedCellView : IESLiveMessageListBaseCell
@property (nonatomic) LiveMessageListPinnedCellContentView pinnedView;
- (id)pinnedView;
- (void)refreshWith:;
- (void)setPinnedView:;
- (id)initWithStyle:reuseIdentifier:;
- (id)intrinsicContentSize;
- (void).cxx_destruct;
+ (id)live_cellIdentifier;
@end
