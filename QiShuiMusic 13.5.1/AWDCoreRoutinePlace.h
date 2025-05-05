@interface AWDCoreRoutinePlace : PBCodable
@property (nonatomic) BOOL hasMapItem;
@property (nonatomic) AWDCoreRoutineMapItem mapItem;
@property (nonatomic) NSMutableArray distanceToOtherPlaces;
- (id)mapItem;
- (void)dealloc;
- (void)writeTo:;
- (void)setMapItem:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasMapItem;
- (void)addDistanceToOtherPlaces:;
- (void)clearDistanceToOtherPlaces;
- (unsigned long long)distanceToOtherPlacesCount;
- (id)distanceToOtherPlacesAtIndex:;
- (id)distanceToOtherPlaces;
- (void)setDistanceToOtherPlaces:;
+ (Class)distanceToOtherPlacesType;
@end
