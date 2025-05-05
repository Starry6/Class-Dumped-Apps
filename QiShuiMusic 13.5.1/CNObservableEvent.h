@interface CNObservableEvent : NSObject
@property (nonatomic) Q eventType;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) @ value;
@property (nonatomic) NSError error;
- (BOOL)hasValue;
- (unsigned long long)eventType;
- (id)error;
- (id)value;
- (void)dematerializeWithObserver:;
+ (id)eventWithResult:;
+ (id)completionEvent;
+ (id)failureEventWithError:;
@end
