@interface CKQuery : NSObject
@property (nonatomic) NSString recordType;
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) NSArray sortDescriptors;
- (void)setSortDescriptors:;
- (id)sortDescriptors;
- (id)init;
- (void)setRecordType:;
- (id)recordType;
- (id)initWithCoder:;
- (id)debugDescription;
- (id)predicate;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (id)initWithRecordType:predicate:;
- (void)setPredicate:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
