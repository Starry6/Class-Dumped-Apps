@interface USTrackingAgentPrivateConnection : NSObject
+ (id)newInterface;
+ (id)newConnection;
+ (BOOL)connectionHasPrivateEntitlement:;
+ (BOOL)connectionHasFamilyControlsEntitlement:;
@end
