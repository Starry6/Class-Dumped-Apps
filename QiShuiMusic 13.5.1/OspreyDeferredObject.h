@interface OspreyDeferredObject : NSObject
- (void).cxx_destruct;
- (void)fulfill:;
- (id)initWithFulfillmentQueue:;
- (void)fulfilledWithCompletion:;
@end
