@interface ABSAddressBookSettings : NSObject
@property (nonatomic) CNFuture contactStoreFuture;
@property (nonatomic) NSDictionary options;
@property (nonatomic) NSInteger policy;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
- (id)init;
- (id)initWithOptions:;
- (int)policy;
- (id)schedulerProvider;
- (id)options;
- (void).cxx_destruct;
- (id)initWithContactStoreFuture:;
- (id)initWithOptions:policy:;
- (id)initWithOptions:policy:contactStoreFuture:schedulerProvider:;
- (id)newFaultHandlerWithStorage:;
- (id)contactStoreFuture;
@end
