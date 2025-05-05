@interface PAPBOutOfProcessPickerAccess : PBCodable
@property (nonatomic) BOOL hasAccess;
@property (nonatomic) PAPBAccess access;
@property (nonatomic) BOOL hasPickerType;
@property (nonatomic) NSInteger pickerType;
- (id)access;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)mergeFrom:;
- (void)setAccess:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (int)pickerType;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setPickerType:;
- (BOOL)hasAccess;
- (void)setHasPickerType:;
- (BOOL)hasPickerType;
@end
