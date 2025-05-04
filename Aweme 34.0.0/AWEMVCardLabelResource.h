@interface AWEMVCardLabelResource : NSObject
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)themeDidChange:;
- (id)initWithContext:model:;
- (void)refreshWithAwemeModel:context:containerElement:;
- (id)textLabel;
- (id)containerView;
- (void)setContainerView:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
- (void)setTextLabel:;
- (void)setupViews;
@end
