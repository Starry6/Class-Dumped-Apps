@interface GEORisonParser : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)stringFromNumber:;
- (id)objectFromRisonString:;
- (id)objectWithReaderInfo:;
- (id)dictionaryWithReaderInfo:;
- (id)keyWithReaderInfo:;
- (id)arrayWithReaderInfo:;
- (id)stringLiteralWithReaderInfo:;
- (id)nullWithReaderInfo:;
- (id)boolWithReaderInfo:;
- (id)numberWithReaderInfo:;
- (id)stringFromRisonObject:;
- (id)stringFromDictionary:;
- (id)stringFromArray:;
- (id)stringFromString:;
- (id)stringFromNull:;
@end
