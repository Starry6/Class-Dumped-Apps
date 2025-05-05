@interface ICRadioURLRequest : ICStoreURLRequest
@property (nonatomic) BOOL backgroundRadioRequest;
@property (nonatomic) NSNumber privateListeningEnabled;
@property (nonatomic) NSNumber delegatedPrivateListeningEnabled;
@property (nonatomic) q protocolVersion;
@property (nonatomic) @? radioContentDictionaryCreationBlock;
- (long long)protocolVersion;
- (void)setProtocolVersion:;
- (id)initWithURLRequest:requestContext:;
- (id)isPrivateListeningEnabled;
- (void)setPrivateListeningEnabled:;
- (void).cxx_destruct;
- (void)buildStoreURLRequestWithURLRequest:builderProperties:completionHandler:;
- (id)isDelegatedPrivateListeningEnabled;
- (void)setDelegatedPrivateListeningEnabled:;
- (void)_decorateHeaderPropertiesForURLRequest:withBuilderProperties:;
- (BOOL)isBackgroundRadioRequest;
- (void)setBackgroundRadioRequest:;
- (id)radioContentDictionaryCreationBlock;
- (void)setRadioContentDictionaryCreationBlock:;
@end
