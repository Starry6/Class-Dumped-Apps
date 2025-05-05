@interface EMTResult : NSObject
@property (nonatomic) double score;
@property (nonatomic) NSLocale locale;
@property (nonatomic) NSArray tokens;
@property (nonatomic) float confidence;
@property (nonatomic) BOOL lowConfidence;
@property (nonatomic) NSString metaInfo;
- (double)score;
- (float)confidence;
- (id)locale;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)tokens;
- (id)copyWithZone:;
- (BOOL)lowConfidence;
- (id)metaInfo;
- (id)initWithLocale:tokens:confidence:lowConfidence:metaInfo:;
@end
