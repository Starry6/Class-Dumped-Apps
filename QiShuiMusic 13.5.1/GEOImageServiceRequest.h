@interface GEOImageServiceRequest : PBRequest
@property (nonatomic) NSMutableArray imageIds;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) I width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) I height;
- (void)readAll:;
- (BOOL)hasWidth;
- (BOOL)hasHeight;
- (void)setHasWidth:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (Class)responseClass;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setWidth:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasHeight:;
- (unsigned int)height;
- (void)mergeFrom:;
- (unsigned int)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)imageIds;
- (void)setImageIds:;
- (void)clearImageIds;
- (void)addImageId:;
- (unsigned long long)imageIdsCount;
- (id)imageIdAtIndex:;
+ (BOOL)isValid:;
+ (Class)imageIdType;
@end
