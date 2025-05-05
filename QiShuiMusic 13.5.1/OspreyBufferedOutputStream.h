@interface OspreyBufferedOutputStream : NSOutputStream
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)write:maxLength:;
- (void)dealloc;
- (id)streamError;
- (void)close;
- (BOOL)hasSpaceAvailable;
- (void).cxx_destruct;
- (void)stream:handleEvent:;
- (id)initWithBufferSize:underlyingOutputStream:queue:;
- (BOOL)hasBufferedData;
- (void)_closeUnderlying;
- (BOOL)_flushBuffer;
@end
