@interface IESECGoodsFeedCollectionHeaderView : UICollectionReusableView
@property (nonatomic) IESECButton informationButton;
@property (nonatomic) <IESECGoodsFeedCollectionHeaderViewDelegate> delegate;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL showStyleChangeButton;
- (id)contentViewBuilder;
- (id)informationButton;
- (void)setInformationButton:;
- (void)setShowStyleChangeButton:;
- (void)showInformationAlert:;
- (BOOL)showStyleChangeButton;
- (void)showStyleChangeGuidingBubble;
- (void)styleChangeButtonDidClick:;
- (void)updateStyleButtonWithStyle:;
- (void)setText:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)alertView;
- (id)text;
- (void)setupSubviews;
@end
