@interface SKProductsRequest : SKRequest
@property (nonatomic) <SKProductsRequestDelegate> delegate;
- (id)init;
- (id)initWithProductIdentifiers:;
- (void)_startWithCompletionHandler:;
- (id)_newResponseForProducts:invalidIdentifiers:;
- (void)_logEventWithPrimaryError:mappedError:;
- (void).cxx_destruct;
- (void)_start;
@end
