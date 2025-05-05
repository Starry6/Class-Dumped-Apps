@interface EFDebouncer : NSObject
@property (nonatomic) EFObservable<EFObserver> observable;
@property (nonatomic) <EFCancelable> cancelable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)observable;
- (void)cancel;
- (id)initWithTimeInterval:scheduler:startAfter:block:;
- (id)cancelable;
- (void).cxx_destruct;
- (void)debounceResult:;
+ (id)log;
@end
