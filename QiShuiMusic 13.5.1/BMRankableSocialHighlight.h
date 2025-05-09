@interface BMRankableSocialHighlight : BMEventBase
@property (nonatomic) NSString groupPhotoPath;
@property (nonatomic) NSString highlightIdentifier;
@property (nonatomic) Q highlightType;
@property (nonatomic) NSDate syndicationDate;
@property (nonatomic) NSString sourceBundleId;
@property (nonatomic) NSArray applicationIdentifiers;
@property (nonatomic) NSURL resourceUrl;
@property (nonatomic) BMSocialHighlightContact sender;
@property (nonatomic) NSString domainIdentifier;
@property (nonatomic) NSString batchIdentifier;
@property (nonatomic) NSDictionary calculatedFeatures;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSDate contentCreationDate;
@property (nonatomic) NSString groupPhotoPathDigest;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSNumber isPrimary;
@property (nonatomic) NSString attributionIdentifier;
@property (nonatomic) NSNumber rank;
@property (nonatomic) NSNumber score;
@property (nonatomic) NSNumber isConversationAutoDonating;
@property (nonatomic) NSString originatingDeviceId;
@property (nonatomic) NSDate rankingDate;
@property (nonatomic) NSString resolvedUrl;
@property (nonatomic) NSString clientVariant;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)domainIdentifier;
- (id)initWithProtoData:;
- (unsigned long long)highlightType;
- (id)isPrimary;
- (id)proto;
- (id)score;
- (id)sender;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (id)displayName;
- (id)rank;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)serialize;
- (id)applicationIdentifiers;
- (id)clientIdentifier;
- (id)groupPhotoPath;
- (id)rankingDate;
- (id)originatingDeviceId;
- (id)contentCreationDate;
- (id)highlightIdentifier;
- (id)sourceBundleId;
- (id)resourceUrl;
- (id)batchIdentifier;
- (id)calculatedFeatures;
- (id)groupPhotoPathDigest;
- (id)attributionIdentifier;
- (id)isConversationAutoDonating;
- (id)resolvedUrl;
- (id)clientVariant;
- (unsigned long long)_socialHighlightTypeForProtoType:;
- (int)_protoType;
- (id)initWithHighlightIdentifier:highlightType:syndicationDate:sourceBundleId:applicationIdentifiers:resourceUrl:sender:domainIdentifier:batchIdentifier:calculatedFeatures:clientIdentifier:contentCreationDate:groupPhotoPathDigest:displayName:isPrimary:attributionIdentifier:rank:score:isConversationAutoDonating:originatingDeviceId:rankingDate:resolvedUrl:clientVariant:;
- (id)syndicationDate;
- (id)initWithHighlightIdentifier:highlightType:syndicationDate:sourceBundleId:applicationIdentifiers:resourceUrl:sender:domainIdentifier:batchIdentifier:calculatedFeatures:clientIdentifier:contentCreationDate:groupPhotoPath:displayName:isPrimary:attributionIdentifier:rank:score:isConversationAutoDonating:originatingDeviceId:rankingDate:resolvedUrl:;
- (id)initWithHighlightIdentifier:highlightType:syndicationDate:sourceBundleId:applicationIdentifiers:resourceUrl:sender:domainIdentifier:batchIdentifier:calculatedFeatures:clientIdentifier:contentCreationDate:groupPhotoPathDigest:displayName:isPrimary:attributionIdentifier:rank:score:isConversationAutoDonating:originatingDeviceId:rankingDate:resolvedUrl:;
+ (id)eventWithData:dataVersion:;
@end
