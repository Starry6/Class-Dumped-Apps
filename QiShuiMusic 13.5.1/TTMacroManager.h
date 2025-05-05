@interface TTMacroManager : NSObject
+ (BOOL)isAddressSanitizer;
+ (BOOL)isInHouse;
+ (BOOL)isRelease;
+ (BOOL)isThreadSanitizer;
+ (BOOL)isDebug;
@end
