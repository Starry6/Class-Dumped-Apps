@interface IESLiveSaaSFeedNoticeCell : UICollectionViewCell
@property (nonatomic) IESLiveSaaSFeedNoticeCycleView cycleView;
@property (nonatomic) <IESLiveSaaSFeedSchemeHandler> schemeHandler;
@property (nonatomic) <HTSLiveSaaSFeedItem> item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cycleView;
- (id)schemeHandler;
- (void)setCycleView:;
- (void)setSchemeHandler:;
- (void)trackNoticeTapWithBannerId:item:;
- (id)item;
- (void)update:;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (long long)currentIndex;
@end
