@interface OspreyMessageReader : NSObject
- (void).cxx_destruct;
- (void)readData:;
- (id)initWithMessageHandler:;
- (void)_produceMessageBody:;
@end
