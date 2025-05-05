@interface EARAudioResult : NSObject
@property (nonatomic) NSData audioResultMat;
@property (nonatomic) Q audioResultsNumVectors;
@property (nonatomic) Q audioResultsVectorSize;
- (void).cxx_destruct;
- (id)initWithAudioResultMat:vectorSize:numVectors:;
- (id)audioResultMat;
- (void)setAudioResultMat:;
- (unsigned long long)audioResultsNumVectors;
- (void)setAudioResultsNumVectors:;
- (unsigned long long)audioResultsVectorSize;
- (void)setAudioResultsVectorSize:;
@end
