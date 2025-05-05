@interface PPSiriQueryResult : NSObject
@property (nonatomic) NSString qid;
@property (nonatomic) NSString domain;
@property (nonatomic) NSNumber confidence;
- (id)confidence;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)domain;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithQid:domain:confidence:;
- (BOOL)isEqualToSiriQueryResult:;
- (id)qid;
+ (id)siriQueryResultWithQid:domain:confidence:;
@end
