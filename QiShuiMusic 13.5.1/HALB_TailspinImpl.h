@interface HALB_TailspinImpl : NSObject
+ (id)initOptionsDictionary;
+ (void)prepareDumpOptions:outDict:;
+ (BOOL)enableTailspinSync;
+ (BOOL)dumpTailspinSync:forReason:;
@end
