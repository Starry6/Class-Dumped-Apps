@interface SYPBContentItem : PBCodable
@property (nonatomic) NSData itemIdentifierData;
@property (nonatomic) BOOL hasDisplayTitle;
@property (nonatomic) NSString displayTitle;
@property (nonatomic) BOOL hasSourceIdentifier;
@property (nonatomic) NSString sourceIdentifier;
@property (nonatomic) BOOL hasSourceLastKnownName;
@property (nonatomic) NSString sourceLastKnownName;
@property (nonatomic) BOOL hasItemURL;
@property (nonatomic) NSString itemURL;
@property (nonatomic) BOOL hasUserActivityData;
@property (nonatomic) NSData userActivityData;
@property (nonatomic) BOOL hasLinkPreviewMetadata;
@property (nonatomic) NSData linkPreviewMetadata;
@property (nonatomic) BOOL hasPreviewLoadLevel;
@property (nonatomic) q previewLoadLevel;
- (void)setUserActivityData:;
- (id)sourceIdentifier;
- (void)writeTo:;
- (void)setItemURL:;
- (unsigned long long)hash;
- (void)copyTo:;
- (BOOL)hasUserActivityData;
- (void)mergeFrom:;
- (id)displayTitle;
- (BOOL)hasSourceIdentifier;
- (id)userActivityData;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)itemURL;
- (BOOL)isEqual:;
- (void)setSourceIdentifier:;
- (id)copyWithZone:;
- (BOOL)hasDisplayTitle;
- (void)setDisplayTitle:;
- (id)linkPreviewMetadata;
- (BOOL)hasSourceLastKnownName;
- (BOOL)hasItemURL;
- (BOOL)hasLinkPreviewMetadata;
- (void)setPreviewLoadLevel:;
- (void)setHasPreviewLoadLevel:;
- (BOOL)hasPreviewLoadLevel;
- (id)itemIdentifierData;
- (void)setItemIdentifierData:;
- (id)sourceLastKnownName;
- (void)setSourceLastKnownName:;
- (void)setLinkPreviewMetadata:;
- (long long)previewLoadLevel;
@end
