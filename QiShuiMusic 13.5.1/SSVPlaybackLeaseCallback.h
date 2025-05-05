@interface SSVPlaybackLeaseCallback : NSObject
@property (nonatomic) @? block;
@property (nonatomic) SSVPlaybackLeaseResponse response;
@property (nonatomic) NSError error;
- (id)block;
- (void)setError:;
- (id)error;
- (id)response;
- (void).cxx_destruct;
- (void)setBlock:;
- (void)setResponse:;
@end
