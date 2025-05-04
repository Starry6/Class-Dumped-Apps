@interface AWEHotSpotInnerBottomBarContext : NSObject
@property (nonatomic) Q entryWordType;
@property (nonatomic) BOOL isInLiveLandScapeForIOS16;
@property (nonatomic) <AWEHotSearchInnerBottomViewDelegate> hotSearchTableViewController;
@property (nonatomic) AWEHotSpotFeedViewModel viewModel;
@property (nonatomic) BOOL shouldShowCommentBar;
@property (nonatomic) @? getInteractionControllerBlock;
@property (nonatomic) @? getInteractionContextBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getInteractionControllerBlock;
- (void)setGetInteractionControllerBlock:;
- (unsigned long long)entryWordType;
- (BOOL)shouldShowCommentBar;
- (void)setIsInLiveLandScapeForIOS16:;
- (void)setEntryWordType:;
- (void)setHotSearchTableViewController:;
- (void)setShouldShowCommentBar:;
- (void)setGetInteractionContextBlock:;
- (BOOL)isInLiveLandScapeForIOS16;
- (id)getInteractionContextBlock;
- (id)hotSearchTableViewController;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
