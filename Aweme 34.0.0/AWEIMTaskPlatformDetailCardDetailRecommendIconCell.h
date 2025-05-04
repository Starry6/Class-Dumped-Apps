@interface AWEIMTaskPlatformDetailCardDetailRecommendIconCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtiltleLabel;
@property (nonatomic) UILabel highlightLabel;
@property (nonatomic) UILabel button;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (void)addSubiews;
- (void)setHighlightLabel:;
- (id)highlightLabel;
- (void)setSubtiltleLabel:;
- (id)subtiltleLabel;
- (void)setButton:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)button;
- (void)setIconImageView:;
- (void)addConstraints;
@end
