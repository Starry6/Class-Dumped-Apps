@interface PSIWordEmbeddingMatch : NSObject
@property (nonatomic) NSString word;
@property (nonatomic) NSString extendedWord;
@property (nonatomic) double score;
- (double)score;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWord:extendedWord:score:;
- (id)word;
- (id)extendedWord;
+ (BOOL)supportsSecureCoding;
@end
