@interface VSTextPreProcessorRule : NSObject
- (void)dealloc;
- (id)initWithDictionaryRepresentation:;
- (id)matchedString:forTokenInRange:;
@end
