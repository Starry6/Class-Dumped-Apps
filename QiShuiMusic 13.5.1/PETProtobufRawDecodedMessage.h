@interface PETProtobufRawDecodedMessage : PBCodable
- (void)writeTo:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (id)initWithData:nestedFields:;
@end
