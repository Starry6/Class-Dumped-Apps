@interface MXPreferredVolumeManager : NSObject
- (id)init;
- (void)dealloc;
- (void)postNotification:category:mode:volume:reason:refCon:sequenceNumber:;
+ (id)sharedInstance;
@end
