@interface AVAirMessageTransformer : AVDataValueTransformer
@property (nonatomic) # messageClass;
- (void)resetState;
- (Class)messageClass;
- (void).cxx_destruct;
- (id)dataForMessage:;
- (id)reverseTransformerForMessageData:;
- (id)initWithMessageClass:;
@end
