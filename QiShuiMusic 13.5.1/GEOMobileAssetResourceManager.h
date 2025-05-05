@interface GEOMobileAssetResourceManager : NSObject
- (void)updateNow;
- (void)notifyResourceIsCorrupt:;
- (void)fetchResourceOfType:extraParameters:options:result:;
+ (id)sharedManager;
@end
