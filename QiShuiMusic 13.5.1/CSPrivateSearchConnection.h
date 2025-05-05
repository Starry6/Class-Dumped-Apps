@interface CSPrivateSearchConnection : CSSearchConnection
@property (nonatomic) NSString token;
- (void)sendMessageAsync:completion:;
- (id)token;
- (id)initWithToken:;
- (id)createXPCDictionaryForQuery:queryID:queryContext:needsInitialization:;
- (void)setToken:;
- (void).cxx_destruct;
+ (id)privateSearchConnectionWithToken:;
@end
