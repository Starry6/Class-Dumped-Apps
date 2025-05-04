@interface AWEBizDowngradeManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onReceiveByteSyncData:;
- (id)init;
- (void)dealloc;
- (void)setUp;
+ (id)sharedManager;
@end
