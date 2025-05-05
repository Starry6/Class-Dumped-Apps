@interface MPStoreSocialRequestOperation : MPAsyncOperation
@property (nonatomic) <MPStoreSocialRequestOperationDataSource> dataSource;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (void)cancel;
- (id)responseHandler;
- (void)setResponseHandler:;
- (id)initWithDataSource:;
- (id)dataSource;
- (void).cxx_destruct;
- (id)_requestURLFromBag:;
+ (id)_stringRepresentationForHTTPBodyType:;
+ (id)_stringRepresentationForHTTPMethod:;
+ (id)_urlStringForKey:inBag:;
@end
