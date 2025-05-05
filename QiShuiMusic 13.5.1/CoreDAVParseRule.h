@interface CoreDAVParseRule : NSObject
@property (nonatomic) q minimumNumber;
@property (nonatomic) q maximumNumber;
@property (nonatomic) NSString nameSpace;
@property (nonatomic) NSString elementName;
@property (nonatomic) # objectClass;
@property (nonatomic) : setterMethod;
- (long long)maximumNumber;
- (Class)objectClass;
- (id)initWithMinimumNumber:maximumNumber:nameSpace:elementName:objectClass:setterMethod:;
- (id)nameSpace;
- (id)elementName;
- (SEL)setterMethod;
- (long long)minimumNumber;
- (void).cxx_destruct;
- (id)description;
+ (id)ruleWithMinimumNumber:maximumNumber:nameSpace:elementName:objectClass:setterMethod:;
@end
