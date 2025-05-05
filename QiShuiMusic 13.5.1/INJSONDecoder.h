@interface INJSONDecoder : NSObject
- (id)_decodeWithCodableAttribute:from:;
- (id)decodeObjectsOfClass:from:;
- (void)decodeObject:withCodableDescription:from:;
- (id)_decodeObjectOfClass:withCodableDescription:from:outCodableDescription:;
- (id)decodeObjectOfClass:from:;
- (id)decodeWithCodableAttribute:from:;
@end
