@interface APSecStore : NSObject
+ (id)loadKey:error:;
+ (BOOL)saveKey:Value:error:;
+ (BOOL)deleteKey:error:;
@end
