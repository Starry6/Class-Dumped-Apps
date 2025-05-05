@interface AFInstanceContext : NSObject
@property (nonatomic) NSString preferencesSubdomain;
@property (nonatomic) NSString mediaRouteIdentifier;
@property (nonatomic) NSString audioDeviceIdentifier;
@property (nonatomic) BOOL supportsAudioPowerUpdate;
@property (nonatomic) BOOL supportsProxyGroupPlayer;
@property (nonatomic) BOOL supportsTelephony;
@property (nonatomic) AFInstanceInfo info;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isCurrent;
- (BOOL)isDefault;
- (id)mediaRouteIdentifier;
- (BOOL)supportsTelephony;
- (BOOL)isCurrent;
- (id)preferencesSubdomain;
- (id)createXPCConnectionWithMachServiceName:options:;
- (id)audioDeviceIdentifier;
- (BOOL)supportsAudioPowerUpdate;
- (id)createXPCListenerForMachService:targetQueue:flags:;
- (id)info;
- (id)createXPCConnectionForMachService:targetQueue:flags:;
- (BOOL)supportsProxyGroupPlayer;
- (id)createXPCListenerWithMachServiceName:;
+ (id)effectiveMachServiceName:;
+ (id)currentContext;
+ (id)defaultContext;
@end
