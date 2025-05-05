@interface SATTSSpeechSynthesisWordTimingInfo : AceObject
@property (nonatomic) q length;
@property (nonatomic) q offset;
@property (nonatomic) NSNumber sampleIndex;
@property (nonatomic) float timestamp;
@property (nonatomic) NSString word;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOffset:;
- (id)groupIdentifier;
- (long long)offset;
- (void)setTimestamp:;
- (id)encodedClassName;
- (float)timestamp;
- (long long)length;
- (void)setLength:;
- (id)word;
- (void)setWord:;
- (id)sampleIndex;
- (void)setSampleIndex:;
+ (id)speechSynthesisWordTimingInfo;
+ (id)speechSynthesisWordTimingInfoWithDictionary:context:;
@end
