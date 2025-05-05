@interface GEOZilchDecoderRequest : GEOMapRequest
@property (nonatomic) @? pathHandler;
@property (nonatomic) @? errorHandler;
- (void)cancel;
- (id)errorHandler;
- (void)setErrorHandler:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDecoder:message:;
- (void)_finishedDecodingWithPath:;
- (void)decodeWithPathHandler:errorHandler:;
- (id)pathHandler;
- (void)setPathHandler:;
@end
