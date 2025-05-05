@interface TextProcessorTrain : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)addText:;
- (id)initWithVocab:;
- (id)textSequence;
- (void)addText:length:;
- (void)addTokenizedText:length:;
- (void)shuffleSamples;
- (unsigned long long)numberSamples;
- (long long)numberTokens;
@end
