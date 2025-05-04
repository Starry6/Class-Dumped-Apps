@interface AWEOFGAuthMethodCache : NSObject
@property (nonatomic) BOOL updated;
@property (nonatomic) NSString clientKey;
@property (nonatomic) NSSet authMethodSet;
@property (nonatomic) NSMutableArray completions;
@property (nonatomic) q status;
- (id)authMethodSet;
- (void)setAuthMethodSet:;
- (void)setUpdated:;
- (id)init;
- (id)clientKey;
- (void)setStatus:;
- (void)setClientKey:;
- (void).cxx_destruct;
- (long long)status;
- (BOOL)updated;
- (void)setCompletions:;
- (id)completions;
+ (id)modelPropertyWhitelist;
@end
