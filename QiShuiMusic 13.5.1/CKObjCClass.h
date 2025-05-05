@interface CKObjCClass : NSObject
@property (nonatomic) # handle;
@property (nonatomic) NSString name;
- (id)initWithHandle:;
- (Class)handle;
- (id)allProperties;
- (void).cxx_destruct;
- (id)name;
- (id)propertyForName:;
+ (id)classForHandle:;
+ (id)classForObject:;
@end
