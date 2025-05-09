@interface AWEPOIDetailNGPOIMallFilterContainer : UIView
@property (nonatomic) UILabel filterLabel;
@property (nonatomic) UIImageView filterArrowImage;
@property (nonatomic) UIButton filterButton;
@property (nonatomic) AWEPOIDetailNGPOIMallFilterContentView filterTableView;
@property (nonatomic) AWEDitoPOIMallPageContext context;
@property (nonatomic) BOOL isShow;
@property (nonatomic) @? onSelectBlock;
@property (nonatomic) <AWEPOIDetailNGPOIMallFilterClickDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isShow;
- (void)setIsShow:;
- (void)showFilter;
- (void)setFilterLabel:;
- (id)filterLabel;
- (void)bindStateAndAction;
- (id)textSelectedColor;
- (void)rotateArrowFromUnfold:arrow:;
- (id)onSelectBlock;
- (void)setOnSelectBlock:;
- (void)initFilterContextWithModel:tabType:extraParams:;
- (id)firstSelectOption:targetText:;
- (id)filterTableView;
- (void)didTapL1Filter;
- (id)textUnSelectedFont;
- (id)textUnselectedColor;
- (void)changeFilterIfNeed;
- (void)changeTextColorIfNeed;
- (void)didTabClick:filterText:;
- (void)resetFilterSessionID;
- (id)textSelectedFont;
- (id)filterArrowImage;
- (void)dissMissFilter;
- (void)didTapL2Filter:;
- (void)didTapL3Filter:;
- (void)didTabChange:toTab:isSelectedL3:;
- (void)setFilterArrowImage:;
- (void)setFilterTableView:;
- (id)delegate;
- (void)setFilterButton:;
- (id)initWithFrame:;
- (id)filterButton;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
- (void)setupUI;
@end
