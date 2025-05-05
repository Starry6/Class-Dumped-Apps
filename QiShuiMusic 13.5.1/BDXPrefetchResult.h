@interface BDXPrefetchResult : NSObject
@property (nonatomic) BDXPrefetchRequestModel requestOrigin;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSDictionary response;
@property (nonatomic) NSDate requestBeginDate;
@property (nonatomic) NSString errorMessage;
- (BOOL)_isExpiredMs;
- (BOOL)_isExpiredTimestamp;
- (id)requestBeginDate;
- (void)setRequestBeginDate:;
- (void)setHeader:;
- (BOOL)isExpired;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)errorMessage;
- (id)response;
- (void).cxx_destruct;
- (id)header;
- (void)setResponse:;
- (void)setErrorMessage:;
- (id)requestOrigin;
- (void)setRequestOrigin:;
@end
