@interface SGMatchedDetailsReader : NSObject
@property (nonatomic) q phraseCount;
@property (nonatomic) q columnCount;
- (long long)columnCount;
- (void).cxx_destruct;
- (BOOL)matchAtPhraseIndex:columnIndex:;
- (id)initWithMatchedDetails:;
- (long long)phraseCount;
@end
