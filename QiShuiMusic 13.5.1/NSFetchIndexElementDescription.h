@interface NSFetchIndexElementDescription : NSObject
@property (nonatomic) NSPropertyDescription property;
@property (nonatomic) NSString propertyName;
@property (nonatomic) Q collationType;
@property (nonatomic) BOOL ascending;
@property (nonatomic) NSFetchIndexDescription indexDescription;
- (void)setAscending:;
- (void)dealloc;
- (id)propertyName;
- (void)setCollationType:;
- (id)property;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)indexDescription;
- (BOOL)isAscending;
- (void)encodeWithCoder:;
- (unsigned long long)collationType;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithProperty:collationType:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
