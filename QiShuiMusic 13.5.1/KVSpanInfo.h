@interface KVSpanInfo : NSObject
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)encodedString;
- (id)spanRange;
- (float)matchScore;
- (unsigned int)editDistance;
- (id)initWithValue:location:length:matchScore:maxTokenCount:matchedTokenCount:maxStopWordCount:matchedStopWordCount:maxAliasCount:matchedAliasCount:editDistance:;
- (id)initWithBuffer:verify:value:error:;
- (unsigned int)maxTokenCount;
- (unsigned int)matchedTokenCount;
- (unsigned int)maxStopWordCount;
- (unsigned int)matchedStopWordCount;
- (unsigned int)maxAliasCount;
- (unsigned int)matchedAliasCount;
- (BOOL)isEqualToSpanInfo:;
- (BOOL)isPartialMatch;
- (BOOL)isApproximateMatch;
- (BOOL)isAliasMatch;
+ (id)spanInfoFromEncodedString:error:;
@end
