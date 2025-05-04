@interface AWEPlayInteractionBottomButtonLiveGameGuideViewModel : NSObject
@property (nonatomic) AWECommonButtonInfoModel infoModel;
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) <AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)activateType;
- (id)initWithInfoModel:context:component:;
- (void)didClickView:atPosition:withModel:;
- (id)infoModel;
- (void)setInfoModel:;
- (void)bindEvent;
- (void)subscribedLiveStatusChange:;
- (void)removeEvent;
- (void)dealloc;
- (id)component;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setComponent:;
+ (BOOL)shouldShowButtonForModel:context:;
+ (BOOL)shouldShowInLiveStatusForModel:context:;
@end
