@interface BWFigCaptureAttachedAccessoriesMonitor : NSObject
@property (nonatomic) BOOL walletAccessoryConnected;
@property (nonatomic) BOOL batteryPackAccessoryConnected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)accessoryConnectionDetached:;
- (id)init;
- (void)dealloc;
- (void)accessoryEndpointAttached:transportType:protocol:forConnection:;
- (BOOL)batteryPackAccessoryConnected;
- (BOOL)walletAccessoryConnected;
+ (id)sharedAttachedAccessoriesMonitor;
@end
