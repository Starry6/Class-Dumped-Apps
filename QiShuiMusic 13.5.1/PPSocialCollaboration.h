@interface PPSocialCollaboration : PPSocialHighlight
@property (nonatomic) NSData handleToIdentityMap;
@property (nonatomic) NSString collaborationIdentifier;
@property (nonatomic) NSDictionary earliestAttributionIdentifiers;
@property (nonatomic) NSString contentDisplayName;
@property (nonatomic) NSString contentType;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSString fileProviderId;
@property (nonatomic) NSData proofOfInclusionHashes;
@property (nonatomic) NSData proofOfInclusionLocalKeyHash;
@property (nonatomic) NSData localIdentity;
@property (nonatomic) NSData localIdentityProof;
- (id)contentType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)localIdentity;
- (id)creationDate;
- (id)collaborationIdentifier;
- (id)handleToIdentityMap;
- (id)initWithIdentifier:resourceURL:timestamp:attributionIdentifiers:supplementaryData:collaborationIdentifier:contentDisplayName:contentCreationDate:contentUTIType:fileProviderId:earliestAttributionIdentifiers:localIdentity:localIdentityProof:handleToIdentityMap:;
- (id)initWithIdentifier:resourceURL:timestamp:attributionIdentifiers:supplementaryData:collaborationIdentifier:contentDisplayName:contentCreationDate:contentUTIType:fileProviderId:earliestAttributionIdentifiers:localIdentity:localIdentityProof:handleToIdentityMap:score:;
- (id)earliestAttributionIdentifiers;
- (id)contentDisplayName;
- (id)fileProviderId;
- (id)proofOfInclusionHashes;
- (id)proofOfInclusionLocalKeyHash;
- (id)localIdentityProof;
+ (BOOL)supportsSecureCoding;
@end
