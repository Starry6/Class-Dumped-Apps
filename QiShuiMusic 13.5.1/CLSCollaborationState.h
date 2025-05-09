@interface CLSCollaborationState : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString ownerPersonID;
@property (nonatomic) q domain;
@property (nonatomic) q domainVersion;
@property (nonatomic) q state;
@property (nonatomic) Q flags;
@property (nonatomic) NSString classID;
@property (nonatomic) NSString note;
@property (nonatomic) NSURL assetURL;
@property (nonatomic) NSDictionary info;
@property (nonatomic) NSString parentEntityName;
@property (nonatomic) NSString senderPersonID;
@property (nonatomic) NSString recipientPersonID;
@property (nonatomic) NSString serverETag;
@property (nonatomic) NSString serverExecutionID;
@property (nonatomic) q serverStatus;
@property (nonatomic) NSMutableArray assetsToAddOrUpdate;
@property (nonatomic) NSArray assets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)assetURL;
- (id)assets;
- (void)setState:;
- (void)setInfo:;
- (id)initWithCoder:;
- (void)setDomainVersion:;
- (void)setAssetURL:;
- (void)encodeWithCoder:;
- (long long)state;
- (id)note;
- (void).cxx_destruct;
- (id)classID;
- (long long)domainVersion;
- (id)description;
- (id)info;
- (id)_init;
- (void)setFlags:;
- (void)setNote:;
- (id)dictionaryRepresentation;
- (long long)domain;
- (unsigned long long)flags;
- (void)setDomain:;
- (id)copyWithZone:;
- (BOOL)hasServerMetadata;
- (void)mergeWithObject:;
- (id)ownerPersonID;
- (void)setOwnerPersonID:;
- (BOOL)validateObject:;
- (void)setSenderPersonID:;
- (id)recipientPersonID;
- (void)setRecipientPersonID:;
- (id)senderPersonID;
- (void)setClassID:;
- (id)initForObjectWithID:targetClass:ownerPersonID:domain:state:flags:;
- (id)initForObject:ownerPersonID:domain:state:flags:;
- (id)assetsToAddOrUpdate;
- (id)friendlyDomainRepresentation;
- (id)friendlyStateRepresentation;
- (id)friendlyFlagsRepresentation;
- (id)parentEntityName;
- (void)setParentEntityName:;
- (id)serverETag;
- (void)setServerETag:;
- (id)serverExecutionID;
- (void)setServerExecutionID:;
- (long long)serverStatus;
- (void)setServerStatus:;
- (void)setAssetsToAddOrUpdate:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
+ (id)supportedInfoDictionaryClasses;
+ (id)identifierForTargetObjectID:ownerPersonID:domain:;
@end
