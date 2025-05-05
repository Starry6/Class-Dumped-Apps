@interface OspreyGRPCStreamingContext : NSObject
@property (nonatomic) BOOL compressionEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)finishWriting;
- (void).cxx_destruct;
- (void)completeWithError:;
- (void)writeFrame:;
- (void)writeFrame:compressed:;
- (id)initWithQueue:responseHandler:completion:;
- (void)bindToUrlRequest:;
- (void)handleResponseData:;
- (void)_writeFrame:compressed:error:;
- (BOOL)isCompressionEnabled;
- (void)setCompressionEnabled:;
@end
