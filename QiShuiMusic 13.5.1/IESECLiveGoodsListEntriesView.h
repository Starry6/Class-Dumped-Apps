@interface IESECLiveGoodsListEntriesView : UIView
@property (nonatomic) UIStackView entryViewsStackView;
@property (nonatomic) NSMutableArray entryViews;
@property (nonatomic) NSArray entryModels;
@property (nonatomic) <IESECLiveGoodsListEntriesViewDelegate> delegate;
@property (nonatomic) double entriesViewWidth;
- (void)setEntryModels:;
- (double)entriesViewWidth;
- (id)entryButtonForType:;
- (id)entryModels;
- (id)entryViews;
- (id)entryViewsStackView;
- (void)generateEntryButtons;
- (id)lottieFilePathWithType:;
- (id)newEntryViewWithItemModel:;
- (void)p_clickEntryView:;
- (void)setEntriesViewInnerSpace:;
- (void)setEntriesViewWidth:;
- (void)setEntryViews:;
- (void)setEntryViewsStackView:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupUI;
@end
