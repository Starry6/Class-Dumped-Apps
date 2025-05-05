@interface NSFetchIndexDescription : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray elements;
@property (nonatomic) NSEntityDescription entity;
@property (nonatomic) NSPredicate partialIndexPredicate;
- (void)_throwIfNotEditable;
- (BOOL)_isEditable;
- (void)_setEntity:;
- (id)entity;
- (void)dealloc;
- (void)setName:;
- (id)elements;
- (void)setPartialIndexPredicate:;
- (void)setElements:;
- (id)initWithName:elements:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (id)partialIndexPredicate;
- (long long)_compare:;
- (id)initWithName:predicate:elements:entity:;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
