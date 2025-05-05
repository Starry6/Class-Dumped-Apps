@interface SFCredentialSearchFilter : NSObject
@property (nonatomic) NSDate minimumCreationDate;
@property (nonatomic) NSDate maximumCreationDate;
@property (nonatomic) NSDate minimumModificationDate;
@property (nonatomic) NSDate maximumModificationDate;
@property (nonatomic) NSArray<_SFServiceIdentifier> serviceIdentifiers;
@property (nonatomic) NSArray usernames;
@property (nonatomic) NSPredicate attributesPredicate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setServiceIdentifiers:;
- (id)serviceIdentifiers;
- (id)minimumCreationDate;
- (id)maximumCreationDate;
- (id)minimumModificationDate;
- (id)maximumModificationDate;
- (id)usernames;
- (void)setMinimumCreationDate:;
- (void)setMaximumCreationDate:;
- (void)setMinimumModificationDate:;
- (void)setMaximumModificationDate:;
- (void)setUsernames:;
- (id)attributesPredicate;
- (void)setAttributesPredicate:;
+ (BOOL)supportsSecureCoding;
@end
