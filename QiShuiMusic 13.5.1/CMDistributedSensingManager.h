@interface CMDistributedSensingManager : NSObject
@property (nonatomic) CMDistributedSensingManagerInternal _internal;
@property (nonatomic) <CMDistributedSensingDelegate> delegate;
- (id)_internal;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)subscribeToVehicleState;
- (void)unsubscribeToVehicleState;
+ (BOOL)isVehicleStateUpdatesAvailable;
@end
