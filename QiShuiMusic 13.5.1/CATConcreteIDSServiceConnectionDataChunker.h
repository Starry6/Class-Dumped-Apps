@interface CATConcreteIDSServiceConnectionDataChunker : NSObject
- (void).cxx_destruct;
- (id)chunkDataIntoMessageContent:;
- (id)initWithWorkQueue:maxDataLength:;
@end
