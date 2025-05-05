@interface IDSFamilyMember : NSObject
@property (nonatomic) q relationship;
@property (nonatomic) NSNumber DSID;
@property (nonatomic) NSString appleID;
@property (nonatomic) NSSet handles;
@property (nonatomic) NSArray devices;
- (id)appleID;
- (id)DSID;
- (long long)relationship;
- (id)devices;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)handles;
- (id)dictionaryRepresentation;
- (id)initWithiCloudID:appleID:handles:devices:;
@end
