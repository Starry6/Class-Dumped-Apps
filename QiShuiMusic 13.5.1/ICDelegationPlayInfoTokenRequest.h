@interface ICDelegationPlayInfoTokenRequest : NSObject
@property (nonatomic) NSNumber DSID;
@property (nonatomic) NSData cloudCredentialsTokenData;
@property (nonatomic) NSData SICData;
@property (nonatomic) NSMutableDictionary propertyListRepresentation;
- (id)DSID;
- (void)setDSID:;
- (id)propertyListRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setSICData:;
- (id)SICData;
- (id)initWithDSID:SICData:;
- (id)cloudCredentialsTokenData;
- (void)setCloudCredentialsTokenData:;
@end
