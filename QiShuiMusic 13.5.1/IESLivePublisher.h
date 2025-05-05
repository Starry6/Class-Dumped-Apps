@interface IESLivePublisher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)combineLatestWith:;
- (id)deliverOnMainThread;
- (void)subscribe:bindingToSubscription:;
- (id)subscribeAssignment:;
- (id)subscribeNext:;
- (id)throttle:;
- (id)zipWith:;
- (id)map:;
- (id)merge:;
- (id)ignore:;
- (id)distinctUntilChanged;
- (id)filter:;
- (id)skip:;
- (id)takeUntil:;
+ (id)zip:;
+ (id)merge:;
+ (id)combineLatest:;
@end
