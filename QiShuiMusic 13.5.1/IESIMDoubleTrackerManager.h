@interface IESIMDoubleTrackerManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)doubleTrackEvent:status:params:;
- (void)applogTrackEvent:params:;
- (void)monitorTrackService:status:params:;
+ (id)sharedInstance;
@end
