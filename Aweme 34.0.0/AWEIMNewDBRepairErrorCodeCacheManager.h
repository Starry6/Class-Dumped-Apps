@interface AWEIMNewDBRepairErrorCodeCacheManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogout;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
