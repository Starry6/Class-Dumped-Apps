@interface NLLexiconEntry : NSObject
@property (nonatomic) NSString string;
@property (nonatomic) Q flags;
@property (nonatomic) double probability;
- (id)string;
- (unsigned int)tokenID;
- (void).cxx_destruct;
- (unsigned long long)flags;
- (double)probability;
- (id)initWithString:tokenID:flags:probability:;
- (id)probabilityInfo;
+ (id)entryWithString:tokenID:flags:probability:;
@end
