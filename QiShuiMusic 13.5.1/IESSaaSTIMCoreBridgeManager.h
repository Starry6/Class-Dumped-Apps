@interface IESSaaSTIMCoreBridgeManager : NSObject
- (Class)getClassConformsToProtocol:;
- (id)getInstanceConformsToProtocol:;
+ (id)sharedInstance;
@end
