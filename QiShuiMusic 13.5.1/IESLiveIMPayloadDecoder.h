@interface IESLiveIMPayloadDecoder : NSObject
@property (nonatomic) <IESLiveIMFilter> filter;
@property (nonatomic) BOOL logEnabled;
@property (nonatomic) NSString methodPrefix;
@property (nonatomic) @? messageClassBlock;
@property (nonatomic) <IESLiveIMDecoder> nextDecoder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)decode:completion:;
- (void)logEvent:params:;
- (id)messageClassBlock;
- (Class)messageClassWith:;
- (id)methodPrefix;
- (id)parsePBMessages:toExtra:;
- (void)registerMethod:withPBClass:;
- (void)setLogEnabled:;
- (void)setMessageClassBlock:;
- (void)setMethodPrefix:;
- (void)trackEvent:params:;
- (id)transformValue:withExtra:;
- (void)unregisterMethod:;
- (id)filter;
- (void)setFilter:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)logEnabled;
@end
