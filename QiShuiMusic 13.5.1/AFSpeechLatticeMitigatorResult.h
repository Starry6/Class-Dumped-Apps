@interface AFSpeechLatticeMitigatorResult : NSObject
@property (nonatomic) NSString version;
@property (nonatomic) float score;
@property (nonatomic) float threshold;
- (float)threshold;
- (float)score;
- (id)version;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)initWithResults:score:threshold:;
+ (BOOL)supportsSecureCoding;
@end
