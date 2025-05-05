@interface WBSPasswordWordListEntry : NSObject
@property (nonatomic) NSString word;
@property (nonatomic) BOOL sensitive;
@property (nonatomic) NSString wordListIdentifier;
@property (nonatomic) Q guessesRequired;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isSensitive;
- (id)word;
- (unsigned long long)guessesRequired;
- (id)initWithWord:isSensitive:wordListIdentifier:guessesRequired:;
- (id)wordListIdentifier;
@end
