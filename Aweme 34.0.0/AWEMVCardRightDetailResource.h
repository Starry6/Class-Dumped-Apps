@interface AWEMVCardRightDetailResource : NSObject
@property (nonatomic) UIView containerView;
@property (nonatomic) DUXBaseImageView rightArrowImageView;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)themeDidChange:;
- (id)rightArrowImageView;
- (void)setRightArrowImageView:;
- (id)initWithContext:model:;
- (void)refreshWithAwemeModel:context:containerElement:;
- (id)containerView;
- (double)iconSize;
- (void)setContainerView:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
- (void)setupViews;
@end
