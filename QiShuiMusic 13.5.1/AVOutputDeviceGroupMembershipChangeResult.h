@interface AVOutputDeviceGroupMembershipChangeResult : NSObject
@property (nonatomic) q status;
@property (nonatomic) NSString cancellationReason;
- (void)dealloc;
- (long long)status;
- (id)cancellationReason;
- (id)initWithStatus:cancellationReason:;
@end
