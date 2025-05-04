@interface AWEGurdSyncResourcesResult : NSObject
@property (nonatomic) BOOL successfully;
@property (nonatomic) NSDictionary info;
@property (nonatomic) BOOL throttled;
- (void)setSuccessfully:;
- (BOOL)isSuccessfully;
- (void)setInfo:;
- (id)info;
- (void)setThrottled:;
- (void).cxx_destruct;
- (BOOL)isThrottled;
@end
