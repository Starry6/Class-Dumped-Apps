@interface AWEPadSplitObserversController : NSObject
@property (nonatomic) <AWEPadSplitViewService> service;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)leftSideBarDidOpenNotification:;
- (void)onPipServiceDidStart:;
- (id)padSplitControllerProtocols;
- (id)init;
- (void)dealloc;
- (id)service;
- (void)setService:;
- (void).cxx_destruct;
- (void)addObservers;
@end
