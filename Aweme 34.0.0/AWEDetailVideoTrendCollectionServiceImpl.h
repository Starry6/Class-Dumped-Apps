@interface AWEDetailVideoTrendCollectionServiceImpl : NSObject
@property (nonatomic) AWEDetailTrendViewModel context;
@property (nonatomic) AWEDetailTrendTracker tracker;
@property (nonatomic) IESServiceProvider serviceProvider;
@property (nonatomic) UIViewController host;
@property (nonatomic) BOOL enableShowToastAfterCollect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)collectWithActionSender:;
- (void)p_origCollectWithActionSender:;
- (id)initWithHost:StateContext:tracker:serviceProvider:;
- (void)setEnableShowToastAfterCollect:;
- (BOOL)enableShowToastAfterCollect;
- (void)setHost:;
- (id)host;
- (id)tracker;
- (void)setTracker:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)serviceProvider;
- (void)setServiceProvider:;
@end
