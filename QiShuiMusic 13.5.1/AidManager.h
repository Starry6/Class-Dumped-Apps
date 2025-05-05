@interface AidManager : NSObject
- (void)requestAid:token:utdid:aidDelegate:;
- (id)value:token:utdid:;
+ (BOOL)isUpToDate:diffDay:;
+ (id)instance;
@end
