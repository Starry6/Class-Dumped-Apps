@interface MFDAMessagePayloadFetchResponseImpl : NSObject
- (id)data;
- (void).cxx_destruct;
- (BOOL)streaming;
- (BOOL)streamingDone;
- (id)initWithData:streaming:streamingDone:;
@end
