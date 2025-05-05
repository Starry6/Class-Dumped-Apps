@interface OspreyMessageProducer : NSObject
- (void).cxx_destruct;
- (id)initWithMessageSerializer:streamingContext:;
- (void)produceMessage:;
- (void)produceMessage:compressed:;
- (void)finishProducing;
@end
