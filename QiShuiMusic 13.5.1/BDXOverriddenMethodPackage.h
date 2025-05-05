@interface BDXOverriddenMethodPackage : NSObject
@property (nonatomic) NSMutableSet publicMethods;
@property (nonatomic) NSMutableSet protectedMethods;
@property (nonatomic) NSMutableSet privateMethods;
- (BOOL)containsMethodName:;
- (id)privateMethods;
- (id)protectedMethods;
- (id)publicMethods;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
