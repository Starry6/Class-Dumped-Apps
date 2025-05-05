@interface TKClientToken : NSObject
@property (nonatomic) NSString tokenID;
@property (nonatomic) NSXPCListenerEndpoint endpoint;
@property (nonatomic) NSXPCListenerEndpoint configurationEndpoint;
@property (nonatomic) NSXPCListenerEndpoint watcherEndpoint;
@property (nonatomic) NSXPCListenerEndpoint SEPKeyEndpoint;
- (id)tokenID;
- (id)watcherEndpoint;
- (id)sessionWithLAContext:error:;
- (id)SEPKeyEndpoint;
- (void).cxx_destruct;
- (id)endpoint;
- (id)initWithTokenID:serverEndpoint:targetUID:;
- (id)_initWithTokenID:;
- (id)initWithTokenID:;
- (id)configurationEndpoint;
+ (id)builtinTokenIDs;
@end
