@interface AWEPostPageARElement : AWEPostPageAnchorCheckCellElement
@property (nonatomic) AWENewPublishGoodsTableCell arTableViewCell;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDictionary extras;
- (void)elementAppear;
- (void)didSelectAnchorWithType:anchorDismissBlock:enterFromType:;
- (void)addAIAnchorWithType:anchorDismissBlock:;
- (void)setupCell:;
- (void)refreshWithAnchorVM:;
- (void)configPlaceholderUI;
- (BOOL)canHandleAnchorType:;
- (id)arTableViewCell;
- (void)arCellClicked;
- (void)revertARCell:;
- (void)updateARCellUI;
- (void)cancleSelectedARAnchor:;
- (void)setArTableViewCell:;
- (void)cleanUp;
- (void)viewWillDisappear:;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)extras;
- (id)cell;
- (void)setupUI;
- (void)didSelect;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
