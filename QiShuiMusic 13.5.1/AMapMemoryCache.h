@interface AMapMemoryCache : NSObject
@property (nonatomic) Q countLimit;
@property (nonatomic) double ageLimit;
- (void)addRequestNode:requestOnwer:forKey:;
- (id)allRequestObject;
- (id)allResponseObject;
- (void)removeRequestNodeForKey:;
- (id)requestNodesForKey:;
- (void)setObject:forKey:request:;
- (void)setObject:forRequest:;
- (id)init;
- (void)setObject:forKey:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setCountLimit:;
- (unsigned long long)countLimit;
- (double)ageLimit;
- (void)setAgeLimit:;
@end
