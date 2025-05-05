@interface AWDCoreRoutineMagicalMomentsFeatureAddon : PBCodable
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) NSInteger value;
- (void)dealloc;
- (void)setName:;
- (BOOL)hasValue;
- (BOOL)hasName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasValue:;
- (void)mergeFrom:;
- (void)setValue:;
- (BOOL)readFrom:;
- (id)description;
- (int)value;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
