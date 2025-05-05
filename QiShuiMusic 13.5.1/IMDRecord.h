@interface IMDRecord : NSObject
- (id)init;
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (id)release;
- (BOOL)retainWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)isEqual:;
+ (id)allocWithZone:;
@end
