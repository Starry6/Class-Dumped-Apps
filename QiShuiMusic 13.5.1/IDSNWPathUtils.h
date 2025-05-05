@interface IDSNWPathUtils : NSObject
- (id)init;
- (void)dealloc;
- (id)getDefaultPath;
- (BOOL)filterVirtualInterfaces:;
- (BOOL)isVoWiFiInterface:;
+ (id)sharedInstance;
@end
