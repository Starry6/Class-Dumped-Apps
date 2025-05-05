@interface MDPathFilter : NSObject
- (id)plist;
- (void)dealloc;
- (id)data;
- (id)initWithData:;
- (id)filterFullPath:;
- (id)initWithMDPlist:;
- (BOOL)isDataROSP;
- (id)filter:allowBundleCheck:;
- (id)iCloudPath:updateFilter:;
- (id)filterPartialPath:;
- (id)filterFullPathTestBundle:;
- (unsigned long long)trimBundlePath:path:buffer:length:;
- (id)filterSubAuxValues:count:;
@end
