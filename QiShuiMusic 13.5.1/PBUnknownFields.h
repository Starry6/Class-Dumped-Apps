@interface PBUnknownFields : NSObject
- (void)dealloc;
- (void)writeTo:;
- (id)description;
- (id)dictionaryRepresentation;
@end
