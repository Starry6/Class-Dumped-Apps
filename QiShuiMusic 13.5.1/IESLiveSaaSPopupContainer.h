@interface IESLiveSaaSPopupContainer : IESLiveSaaSEventForwardingView
@property (nonatomic) q popupViewCount;
@property (nonatomic) RACSubject stateDidChangedSubject;
@property (nonatomic) RACSignal stateDidChanged;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stateDidChanged;
- (void)addPanGesture;
- (BOOL)hasPopup;
- (long long)popupViewCount;
- (void)setPopupViewCount:;
- (void)setStateDidChangedSubject:;
- (id)stateDidChangedSubject;
- (void)dealloc;
- (void)willRemoveSubview:;
- (void)didAddSubview:;
- (id)initWithFrame:;
- (void)clear;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)size;
- (void)panned:;
@end
