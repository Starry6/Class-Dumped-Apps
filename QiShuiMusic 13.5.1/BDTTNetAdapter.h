@interface BDTTNetAdapter : NSObject
- (void)dealloc;
+ (void)setIsAsyncWhenHandleSchemeTask:;
+ (BOOL)isAsyncWhenHandleSchemeTask;
+ (id)safeHostList;
+ (void)setSafeHostList:;
@end
