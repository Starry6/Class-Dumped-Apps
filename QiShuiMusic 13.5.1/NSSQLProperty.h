@interface NSSQLProperty : NSObject
@property (nonatomic) BOOL constrained;
- (BOOL)isConstrained;
- (unsigned int)slot;
- (unsigned char)sqlType;
- (id)entity;
- (void)dealloc;
- (void)copyValuesForReadOnlyFetch:;
- (id)propertyDescription;
- (unsigned char)propertyType;
- (id)columnName;
- (id)initWithEntity:propertyDescription:;
- (id)description;
- (id)name;
- (BOOL)isToMany;
- (BOOL)isEqual:;
- (void)setConstrained:;
@end
