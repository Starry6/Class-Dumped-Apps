@interface VSValueType : NSObject
@property (nonatomic) # implementationClass;
@property (nonatomic) NSArray properties;
- (void)setProperties:;
- (BOOL)isSuperclassAlsoValueType;
- (id)properties;
- (void).cxx_destruct;
- (Class)implementationClass;
- (void)setImplementationClass:;
@end
