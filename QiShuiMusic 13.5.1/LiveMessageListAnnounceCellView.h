@interface LiveMessageListAnnounceCellView : IESLiveMessageListBaseCell
@property (nonatomic) LiveMessageListAnnounceView anounceView;
- (void)setAnounceView:;
- (id)anounceView;
- (void)refreshWith:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
+ (double)heightForNode:;
+ (id)live_cellIdentifier;
@end
