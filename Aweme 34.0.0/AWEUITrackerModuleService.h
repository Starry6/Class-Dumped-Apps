@interface AWEUITrackerModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)track:event:params:;
- (id)appDelegateTrackManager;
@end
