@interface AWETokamakLog : NSObject
+ (void)trackImmediately:param:;
+ (void)track:param:;
+ (BOOL)skip;
@end
