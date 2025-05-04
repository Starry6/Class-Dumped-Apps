@interface AWEDetailHeaderOwnerView : UIView
@property (nonatomic) UILabel ownerLabel;
@property (nonatomic) UIImageView arrowImageView;
- (void)updateHidden;
- (void)updateViewWithStyle:;
- (void)updateToUserName:attrName:userID:secUserID:;
- (id)ownerLabel;
- (void)setArrowHidden:;
- (void)setOwnerLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setTitleHidden:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
