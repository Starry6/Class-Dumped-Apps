@interface DMFFetchManagedBooksResultObject : CATTaskResultObject
@property (nonatomic) NSArray books;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBooks:;
- (id)books;
+ (BOOL)supportsSecureCoding;
@end
