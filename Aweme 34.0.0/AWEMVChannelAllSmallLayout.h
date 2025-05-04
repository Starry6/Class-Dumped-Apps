@interface AWEMVChannelAllSmallLayout : NSObject
@property (nonatomic) NSMutableArray horizontalCardList;
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enablePadConfig;
- (double)padSpacing;
- (id)mvPageContext;
- (id)createSectionViewModels:requestInfo:otherInfo:;
- (void)appendSectionViewModel:lastSectionViewModel:;
- (id)createSkeletonSectionViewModels;
- (BOOL)isSmallCard:;
- (id)horizontalCardList;
- (id)filterLargeBanner:;
- (void)filterAllSmallCardVideo:;
- (Class)getSmallSectionViewModelClass;
- (id)appendSmallCardDataToLastSectionViewModel:;
- (void)setHorizontalCardList:;
- (void)setContainer:;
- (id)container;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
