@interface VSValueTypeProperty : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q kind;
@property (nonatomic) NSSet allowedClasses;
@property (nonatomic) @ initialValue;
- (void)setKind:;
- (void)setName:;
- (unsigned long long)kind;
- (void)setAllowedClasses:;
- (id)initialValue;
- (void).cxx_destruct;
- (id)name;
- (void)setInitialValue:;
- (id)allowedClasses;
+ (id)valueTypePropertyWithName:kind:allowedClasses:initialValue:;
@end
