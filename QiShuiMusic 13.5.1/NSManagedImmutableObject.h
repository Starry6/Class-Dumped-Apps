@interface NSManagedImmutableObject : NSObject
@property (nonatomic) NSEntityDescription entity;
@property (nonatomic) NSManagedObjectID objectID;
- (id)valueForKey:;
- (BOOL)respondsToSelector:;
- (id)methodForSelector:;
- (id)methodSignatureForSelector:;
+ (void)release;
+ (id)retain;
+ (id)_retain_1;
+ (void)_release_1;
+ (Class)classForEntity:;
+ (BOOL)_isGeneratedClass_1;
+ (BOOL)_isGeneratedClass;
+ (id)_PFMOClassFactoryData;
+ (id)allocWithEntity:;
@end
