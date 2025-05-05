@interface NEProcessInfo : NSObject
- (id)init;
+ (BOOL)is64bitCapable;
+ (id)copyDNSUUIDs;
+ (void)clearUUIDCache;
+ (id)copyNEHelperUUIDs;
+ (id)copyUUIDsForBundleID:uid:;
+ (id)copyUUIDsForExecutable:;
@end
