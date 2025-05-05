@interface IESSaaSTIMOModelLogoutCleanCacheFunction : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearAllCache;
- (void)userDidLogout:;
- (id)init;
- (void)dealloc;
+ (long long)startUpOrder;
+ (void)startUp;
+ (id)sharedInstance;
@end
