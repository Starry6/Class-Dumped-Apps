@interface TTRequestRetryByHeaderFilterObject : NSObject
@property (nonatomic) NSString filterResponseHeader;
@property (nonatomic) @? retryRequestByHeaderCallback;
- (id)filterResponseHeader;
- (id)initWithFilterHeader:retryRequestByHeaderCallback:;
- (id)retryRequestByHeaderCallback;
- (void)setFilterResponseHeader:;
- (void)setRetryRequestByHeaderCallback:;
- (void).cxx_destruct;
@end
