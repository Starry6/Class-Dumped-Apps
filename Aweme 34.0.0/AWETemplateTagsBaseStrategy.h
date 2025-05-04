@interface AWETemplateTagsBaseStrategy : NSObject
@property (nonatomic) AWETemplateTagsModel model;
@property (nonatomic) AWETemplateTagsContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (id)extraTrackParams;
- (id)initWithModel:context:;
- (void)didTriggerEvent:;
- (void)didInitializeView;
- (void)didClickWithEvent:;
- (void)setModel:;
- (long long)templateType;
- (id)model;
- (void)setContext:;
- (id)customView;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
- (void)didInitialize;
+ (id)activeInfo;
+ (BOOL)shouldActiveWithModel:context:;
+ (id)clientBusinessID;
+ (BOOL)shouldHandleReplaceTriggerEvent:;
+ (void)prepareWithModel:context:;
@end
