@interface AWEStarLinkView : UIView
@property (nonatomic) AWEUserModel user;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackShow;
- (id)defaultIconForModel:;
- (void)trackTap;
- (void)trackShowFailed:;
- (id)user;
- (void)setLabel:;
- (void)setUser:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (id)label;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)handleTap:;
- (void)didTap;
- (id)arrowImageView;
- (void)setArrowImageView:;
- (void)updateWithUser:;
@end
