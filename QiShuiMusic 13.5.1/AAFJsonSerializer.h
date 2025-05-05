@interface AAFJsonSerializer : AAFDefaultSerializer
- (id)mediaTypes;
- (id)_dictionaryFromObject:error:;
- (id)_dataFromDictionary:error:;
@end
