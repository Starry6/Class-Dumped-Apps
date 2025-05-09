@interface IESLiveSaaSMessageTransportController : NSObject
@property (nonatomic) IESLiveSaaSMessageHTTPTransport httpTransport;
@property (nonatomic) IESLiveSaaSWSmessageFetcher wsTransport;
@property (nonatomic) IESLiveSaaSMessageDecoder decoder;
@property (nonatomic) <IESLiveSaaSLanguageService> languageService;
@property (nonatomic) BOOL disableSwitchWS;
@property (nonatomic) BOOL switchToWS;
@property (nonatomic) q switchLimitCount;
@property (nonatomic) NSDictionary parameter;
@property (nonatomic) NSObject<OS_dispatch_queue> messageParseQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveIMMessageReciever> messageReciever;
- (BOOL)disableSwitchWS;
- (id)languageService;
- (id)messageReciever;
- (void)setWsTransport:;
- (void)closeWsConnect;
- (void)decodePBMessageFromHttp:;
- (void)decodePBMessageFromWS:;
- (void)fetchMessageTime:;
- (id)httpTransport;
- (id)initWithConfigure:;
- (id)messageParseQueue;
- (void)p_addQueryToParams:fromParams:;
- (void)p_decodePBMessage:;
- (void)p_getStrategyFromHTTP:;
- (void)reconnectWS;
- (void)setDisableSwitchWS:;
- (void)setHttpTransport:;
- (void)setLanguageService:;
- (void)setMessageParseQueue:;
- (void)setMessageReciever:;
- (void)setSwitchLimitCount:;
- (void)setSwitchToWS:;
- (long long)switchLimitCount;
- (BOOL)switchToWS;
- (id)wsTransport;
- (void)disconnect;
- (void)setDecoder:;
- (id)decoder;
- (void).cxx_destruct;
- (void)connect;
- (id)parameter;
- (void)setParameter:;
@end
