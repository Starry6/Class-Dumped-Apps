@interface WBSSearchHelperConnectionManager : NSObject
@property (nonatomic) NSXPCConnection searchHelperConnection;
- (void)removeClient:;
- (id)init;
- (void).cxx_destruct;
- (id)searchHelperConnectionRequestedByClient:;
- (id)searchHelperConnection;
- (void)setSearchHelperConnection:;
+ (id)sharedManager;
@end
