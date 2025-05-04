@interface AWEEcomSearchVirtualWordSessionIDManager : NSObject
- (id)getAppLogSessionID;
- (void)sendSessionIdToFe;
- (void)dealloc;
+ (id)sharedInstance;
@end
