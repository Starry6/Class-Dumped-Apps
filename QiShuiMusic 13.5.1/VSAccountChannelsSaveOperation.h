@interface VSAccountChannelsSaveOperation : VSAsyncOperation
@property (nonatomic) VSAccountChannels unsavedAccountChannels;
@property (nonatomic) VSAccountChannelsCenter accountChannelsCenter;
@property (nonatomic) NSError error;
- (void)executionDidBegin;
- (id)init;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)initWithUnsavedAccountChannels:accountChannelsCenter:;
- (id)unsavedAccountChannels;
- (void)setUnsavedAccountChannels:;
- (id)accountChannelsCenter;
- (void)setAccountChannelsCenter:;
@end
