@interface IESMMAlgorithmResultData : NSObject
@property (nonatomic) Q algorithmType;
@property (nonatomic) Q algorithmBachType;
- (unsigned long long)algorithmBachType;
- (void)setAlgorithmBachType:;
- (id)init;
- (unsigned long long)algorithmType;
- (void)setAlgorithmType:;
@end
