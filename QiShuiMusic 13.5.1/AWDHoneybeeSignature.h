@interface AWDHoneybeeSignature : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasRadarTitle;
@property (nonatomic) NSString radarTitle;
@property (nonatomic) BOOL hasRadarSignature;
@property (nonatomic) NSString radarSignature;
@property (nonatomic) BOOL hasRadarDescription;
@property (nonatomic) NSString radarDescription;
@property (nonatomic) BOOL hasRadarComponent;
@property (nonatomic) NSString radarComponent;
@property (nonatomic) BOOL hasRadarVersion;
@property (nonatomic) NSString radarVersion;
@property (nonatomic) BOOL hasRadarAttachmentUUID;
@property (nonatomic) NSString radarAttachmentUUID;
@property (nonatomic) NSMutableArray radarAttachmentTypes;
@property (nonatomic) BOOL hasRadarAttachmentFilename;
@property (nonatomic) NSString radarAttachmentFilename;
@property (nonatomic) NSMutableArray keywords;
@property (nonatomic) BOOL hasInstances;
@property (nonatomic) NSInteger instances;
- (id)keywords;
- (void)setKeywords:;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (int)instances;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearKeywords;
- (void)addKeywords:;
- (unsigned long long)keywordsCount;
- (id)keywordsAtIndex:;
- (id)radarDescription;
- (void)setRadarDescription:;
- (BOOL)hasRadarDescription;
- (void)setInstances:;
- (id)radarTitle;
- (void)setRadarTitle:;
- (BOOL)hasRadarTitle;
- (BOOL)hasRadarSignature;
- (BOOL)hasRadarComponent;
- (BOOL)hasRadarVersion;
- (BOOL)hasRadarAttachmentUUID;
- (void)clearRadarAttachmentTypes;
- (void)addRadarAttachmentTypes:;
- (unsigned long long)radarAttachmentTypesCount;
- (id)radarAttachmentTypesAtIndex:;
- (BOOL)hasRadarAttachmentFilename;
- (void)setHasInstances:;
- (BOOL)hasInstances;
- (id)radarSignature;
- (void)setRadarSignature:;
- (id)radarComponent;
- (void)setRadarComponent:;
- (id)radarVersion;
- (void)setRadarVersion:;
- (id)radarAttachmentUUID;
- (void)setRadarAttachmentUUID:;
- (id)radarAttachmentTypes;
- (void)setRadarAttachmentTypes:;
- (id)radarAttachmentFilename;
- (void)setRadarAttachmentFilename:;
+ (Class)keywordsType;
+ (Class)radarAttachmentTypesType;
@end
