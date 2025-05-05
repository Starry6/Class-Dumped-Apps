@interface SSItemLookupRequest : SSRequest
@property (nonatomic) NSDictionary parameters;
@property (nonatomic) <SSItemLookupRequestDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)init;
- (void)dealloc;
- (id)copyXPCEncoding;
- (BOOL)start;
- (void)startWithCompletionBlock:;
- (id)parameters;
- (void)setValue:forParameter:;
- (void)startWithItemLookupBlock:;
- (id)valueForParameter:;
- (id)copyQueryStringParameters;
- (id)_copyItemsFromResponse:expirationDate:;
- (id)_convertedValueForValue:;
- (id)_errorForStatusCode:;
@end
