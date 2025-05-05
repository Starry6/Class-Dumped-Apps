@interface BDXGurdSyncResourcesResult : NSObject
@property (nonatomic) BOOL successfully;
@property (nonatomic) NSDictionary info;
@property (nonatomic) BOOL throttled;
- (BOOL)isSuccessfully;
- (void)setSuccessfully:;
- (void)setInfo:;
- (void).cxx_destruct;
- (void)setThrottled:;
- (id)info;
- (BOOL)isThrottled;
@end
