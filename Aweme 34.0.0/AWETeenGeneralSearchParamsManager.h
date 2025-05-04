@interface AWETeenGeneralSearchParamsManager : NSObject
@property (nonatomic) double teenmodeEnterTimeInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)teenModeDidChange:isLogout:;
- (void)p_appDidBecomeActive:;
- (void)p_addNotification;
- (void)setTeenmodeEnterTimeInterval:;
- (double)teenmodeEnterTimeInterval;
- (void)updateTeenmodeEnterTimeInterval;
- (double)generalSearchDuration;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
