@interface IDSGameCenterData : NSObject
@property (nonatomic) NSString contactsAssociationID;
@property (nonatomic) NSNumber contactsSharingState;
@property (nonatomic) NSDate contactsLastUpdatedDate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqualTo:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithAssociationID:sharingState:lastUpdatedDate:;
- (id)compareAgainstData:;
- (id)contactsAssociationID;
- (void)setContactsAssociationID:;
- (id)contactsSharingState;
- (void)setContactsSharingState:;
- (id)contactsLastUpdatedDate;
- (void)setContactsLastUpdatedDate:;
+ (BOOL)supportsSecureCoding;
@end
