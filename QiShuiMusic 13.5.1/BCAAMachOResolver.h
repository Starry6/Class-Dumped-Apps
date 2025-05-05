@interface BCAAMachOResolver : NSObject
- (id)getAllBundlesContainsEntryFunc;
- (id)getBundleActivators:;
- (id)getBundleEntryFunc:;
- (id)getBundleMachoHeader:;
- (id)getClassServicesOfBundle:;
- (id)getInstanceServicesOfBundle:;
+ (id)shareInstance;
@end
