@interface AUMessageChannel_XPC : NSObject
@property (nonatomic) @? callHostBlock;
- (id)initWithListenerEndpoint:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)callAudioUnit:;
- (id)callHostBlock;
- (void)setCallHostBlock:;
@end
