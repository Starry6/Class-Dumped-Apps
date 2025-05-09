@interface HTSLivePopupContainer : HTSEventForwardingView
@property (nonatomic) q popupViewCount;
@property (nonatomic) RACSubject stateDidChangedSubject;
@property (nonatomic) RACSignal stateDidChanged;
@property (nonatomic) @? filterBlock;
@property (nonatomic) UIViewController rootViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stateDidChanged;
- (void)addPanGesture;
- (void)addSubview:identifier:;
- (BOOL)hasPopup;
- (long long)popupViewCount;
- (void)setPopupViewCount:;
- (void)setStateDidChangedSubject:;
- (id)stateDidChangedSubject;
- (void)setRootViewController:;
- (void)dealloc;
- (void)willRemoveSubview:;
- (id)rootViewController;
- (void)didAddSubview:;
- (id)initWithFrame:;
- (id)filterBlock;
- (void)clear;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)size;
- (void)panned:;
- (void)setFilterBlock:;
@end
