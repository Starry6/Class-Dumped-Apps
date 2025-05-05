@interface AAFDefaultSerializer : NSObject
@property (nonatomic) NSArray mediaTypes;
- (id)stringFromData:;
- (id)mediaTypes;
- (id)_className;
- (id)stringFromDictionary:;
- (id)dictionaryFromObject:;
- (id)dictionaryFromObject:error:;
- (id)dataFromDictionary:;
- (id)dataFromDictionary:error:;
- (void)_raiseException:;
- (id)_dictionaryFromObject:error:;
- (id)_dataFromDictionary:error:;
@end
