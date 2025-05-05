@interface BUInterfaceCrash : NSObject
- (void)resolveInstanceAction;
+ (void)resolveClassAction;
+ (BOOL)resolveInstanceMethod:;
+ (BOOL)resolveClassMethod:;
@end
