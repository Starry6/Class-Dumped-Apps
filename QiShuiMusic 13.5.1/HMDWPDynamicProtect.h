@interface HMDWPDynamicProtect : NSObject
@property (nonatomic) NSMutableArray waitFlags;
@property (nonatomic) NSMutableSet swizzledMethodSet;
@property (nonatomic) NSDictionary protectedMethodDictionary;
- (id)protectMethods:;
- (id)blockWithClass:selector:isInstance:signature:methodName:;
- (void)protectMethodsOnMainThread:onAnyThread:;
- (id)protectedMethodDictionary;
- (void)setProtectedMethodDictionary:;
- (void)setSwizzledMethodSet:;
- (void)setWaitFlags:;
- (id)swizzledMethodSet;
- (id)waitFlags;
- (id)init;
- (void).cxx_destruct;
+ (id)validatedMethodNameString:error:;
+ (id)sharedInstance;
@end
