@interface UTDevice : NSObject
+ (id)aid:token:;
+ (void)aidAsync:token:aidDelegate:;
+ (BOOL)setAppkey:secret:;
+ (id)utdid;
@end
