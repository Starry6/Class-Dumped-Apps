@interface INFNumber : INFSentenceToken
@property (nonatomic) NSNumber value;
- (id)identifier;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:;
- (id)stringForContext:;
- (id)contributingSentenceContext;
+ (id)numberWithIdentifier:;
@end
