@interface TextProcessorInference : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)addText:;
- (void)resetWithBOS:;
- (id)initWithVocab:;
- (id)textSequence;
- (id)initWithLength:vocab:BOS:;
@end
