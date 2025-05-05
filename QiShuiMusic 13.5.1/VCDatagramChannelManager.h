@interface VCDatagramChannelManager : NSObject
@property (nonatomic) @? readHandler;
- (id)init;
- (void)dealloc;
- (id)readHandler;
- (void)setReadHandler:;
- (id)addDatagramChannelWithDescriptor:eventHandler:error:;
- (id)addDatagramChannelWithDescriptor:eventHandler:writeCompletionHandler:error:;
- (id)addDatagramChannelWithDestination:eventHandler:error:;
- (id)addDatagramChannelWithDestination:eventHandler:dataPath:error:;
- (id)addDatagramChannelWithDestination:eventHandler:writeCompletionHandler:dataPath:error:;
- (id)setupEmulatedDatagramChannelWithDestination:datagramChannel:;
- (BOOL)setupDatagramChannel:eventHandler:writeCompletionHandler:error:;
- (id)datagramChannelWithChannelToken:;
- (void)executeBlockForIDSDestination:blockToExecute:;
- (void)removeDatagramChannel:;
+ (id)sharedInstance;
@end
