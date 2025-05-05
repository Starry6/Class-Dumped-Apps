@interface SNSoundPrintKEmbeddingModelOutput : NSObject
@property (nonatomic) MLMultiArray fixedLengthEmbedding;
@property (nonatomic) MLMultiArray framewiseEmbedding;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithFixedLengthEmbedding:framewiseEmbedding:;
- (id)fixedLengthEmbedding;
- (void)setFixedLengthEmbedding:;
- (id)framewiseEmbedding;
- (void)setFramewiseEmbedding:;
@end
