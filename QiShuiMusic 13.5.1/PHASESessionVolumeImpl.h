@interface PHASESessionVolumeImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)registerVolumeChangedNotificationBlock:;
- (id)volumeForCommand:;
- (id)volumeForCommandFromCallback:;
@end
