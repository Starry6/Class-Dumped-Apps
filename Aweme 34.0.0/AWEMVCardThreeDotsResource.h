@interface AWEMVCardThreeDotsResource : NSObject
@property (nonatomic) AWEMVCardExtendView threeDotButton;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) AWEDCFeedBaseCellElement containerElement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)themeDidChange:;
- (void)setContainerElement:;
- (id)containerElement;
- (id)initWithContext:model:;
- (void)refreshWithAwemeModel:context:containerElement:;
- (id)threeDotButton;
- (void)didClickedButton:event:;
- (void)setThreeDotButton:;
- (id)containerView;
- (double)iconSize;
- (void)setContext:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
- (void)setupViews;
+ (id)imageWithName:;
@end
