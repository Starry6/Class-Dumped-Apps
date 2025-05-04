@interface AWEPluginDeviceOrientationCustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)bdp_supportOrientation;
- (void)bdp_setSupportOrientation:;
- (unsigned long long)bdp_supportOrientationsForWindow:;
+ (id)sharedPlugin;
@end
