@interface AWEPlayInteractionPOIUGCRateAnchorView : UIView
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) NSMutableArray gradeLabelArray;
@property (nonatomic) <AWEPlayInteractionPOIUGCRateAnchorViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithAwemeModel:;
- (void)setupSubViews;
- (void)didClickCloseButton;
- (void)didTapCommentLabel:;
- (id)gradeLabelArray;
- (void)setGradeLabelArray:;
- (id)p_createGradeLabelWithGradeModel:;
- (void)p_gradeLabelDidTapped:;
- (void)setModel:;
- (id)init;
- (id)delegate;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)infoLabel;
- (void)setCloseButton:;
- (id)closeButton;
- (void)setInfoLabel:;
@end
