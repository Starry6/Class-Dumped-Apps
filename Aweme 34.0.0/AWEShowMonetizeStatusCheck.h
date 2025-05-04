@interface AWEShowMonetizeStatusCheck : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isCDNUrlExpiredWithAweme:offsetDuration:;
- (void)checkCDNUrlExpiredWithAwemes:currentAweme:checkType:;
- (void)refreshWithItemIDs:reason:;
- (void)checkPermissionStatusWithAwemes:currentAweme:;
- (void)refreshWithItems:reason:;
- (id)init;
- (void)dealloc;
- (void)applicationDidBecomeActiveNotification:;
@end
