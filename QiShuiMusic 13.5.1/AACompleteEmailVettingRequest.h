@interface AACompleteEmailVettingRequest : AAEmailVettingRequest
- (id)urlString;
- (id)initWithAccount:token:;
- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)initWithURLString:account:token:;
+ (Class)responseClass;
@end
