@interface AWEIMBatchFetchUserResponseModel : NSObject
@property (nonatomic) NSArray users;
@property (nonatomic) q nextPageLimit;
- (long long)nextPageLimit;
- (void)setNextPageLimit:;
- (id)users;
- (void).cxx_destruct;
- (void)setUsers:;
@end
