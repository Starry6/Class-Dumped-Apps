@interface IDSOpportunisticOptions : NSObject
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSArray blocklistedDestinations;
@property (nonatomic) NSDate expiryDate;
@property (nonatomic) BOOL destinationsMustBeInContacts;
- (id)init;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (id)expiryDate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setExpiryDate:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithBlocklistedDestinations:expiryDate:destinationsMustBeInContacts:;
- (id)blocklistedDestinations;
- (void)setBlocklistedDestinations:;
- (BOOL)destinationsMustBeInContacts;
- (void)setDestinationsMustBeInContacts:;
+ (BOOL)supportsSecureCoding;
@end
