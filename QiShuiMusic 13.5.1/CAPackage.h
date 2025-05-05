@interface CAPackage : NSObject
@property (nonatomic) CALayer rootLayer;
@property (nonatomic) BOOL geometryFlipped;
- (id)publishedObjectNames;
- (void)dealloc;
- (void)foreachLayer:;
- (id)CAMLParser:resourceForURL:;
- (id)rootLayer;
- (id)unarchiver:didDecodeObject:;
- (void)_readFromCAMLData:type:options:error:;
- (id)_initWithData:type:options:error:;
- (Class)CAMLParser:didFailToFindClassWithName:;
- (void)CAMLParser:didLoadResource:fromURL:;
- (id)_initWithContentsOfURL:type:options:error:;
- (id)publishedObjectWithName:;
- (void)_readFromCAMLURL:type:options:error:;
- (id)substitutedClasses;
- (void)_addClassSubstitutions:;
- (void)_readFromArchiveData:options:error:;
- (BOOL)isGeometryFlipped;
- (Class)unarchiver:cannotDecodeObjectOfClassName:originalClasses:;
+ (id)packageWithContentsOfURL:type:options:error:;
+ (id)packageWithData:type:options:error:;
@end
