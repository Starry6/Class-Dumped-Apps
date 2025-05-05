@interface IESLiveInteractionLayoutChangePublisher : NSObject
@property (nonatomic) <IESLiveCompoundSubscription> currentLayoutDidChangedDisposable;
@property (nonatomic) IESLiveCombineSubject currentLayoutDidChangedSubject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentLayoutDidChangedDisposable;
- (id)currentLayoutDidChangedSubject;
- (void)onCurrentLayoutDidChangedUsingBlock:;
- (id)onCurrentLayoutDidChangedWithSubscriptionUsingBlock:;
- (void)onCurrentLayoutWillChangedUsingBlock:;
- (id)onCurrentLayoutWillChangedWithSubscriptionUsingBlock:;
- (void)publishLayoutChangedFrom:to:;
- (void)setCurrentLayoutDidChangedDisposable:;
- (void)setCurrentLayoutDidChangedSubject:;
- (void)dispose;
- (void).cxx_destruct;
@end
