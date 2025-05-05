@interface LNValueType : NSObject
@property (nonatomic) NSString cat_dialogType;
@property (nonatomic) NSSet objectClassesForCoding;
- (id)cat_value:;
- (id)cat_keyPath;
- (Class)objectClass;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_init;
- (id)copyWithZone:;
- (id)metadataClassesForCoding;
- (BOOL)objectIsMemberOfType:;
- (id)objectClassesForCoding;
- (void)enumerateValuesOfValueType:value:block:;
+ (BOOL)supportsSecureCoding;
@end
