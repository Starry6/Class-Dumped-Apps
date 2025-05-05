@interface CKUserDefaults : NSUserDefaults
+ (id)suiteName;
+ (void)performAtomicDefaultsOperation:;
+ (id)CKUserDefaults;
@end
