@interface AWEJSEventDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) NSMutableDictionary subscriberDict;
- (void)bindEvent;
- (id)subscriberDict;
- (void)setSubscriberDict:;
- (void)bindReportEvent;
- (id)user;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)registerEvent:callback:;
@end
