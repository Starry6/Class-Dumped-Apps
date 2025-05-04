@interface AWEIMMessageListSladarInjectedInfoTracker : AWEIMComponentBase
@property (nonatomic) NSString vcIdentifyKey;
@property (nonatomic) IESIMSlardarInjectedInfoTracker slardarTracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_willDealloc;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)addCustomContextValue:bizKey:;
- (void)addFilterValue:bizKey:;
- (void)setVcIdentifyKey:;
- (id)vcIdentifyKey;
- (id)slardarTracker;
- (void)setSlardarTracker:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
