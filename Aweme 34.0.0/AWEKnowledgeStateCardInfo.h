@interface AWEKnowledgeStateCardInfo : NSObject
@property (nonatomic) AWEKnowledgeStateCardToken cardToken;
@property (nonatomic) NSMutableDictionary stateInfo;
@property (nonatomic) <AWEKnowledgeStateResultHandlerProtocol> resultHandler;
@property (nonatomic) <AWEKnowledgeStateCardInfoDelegate> delegate;
@property (nonatomic) NSMutableDictionary quickStartDic;
- (id)cardToken;
- (void)setCardToken:;
- (id)quickStartDic;
- (void)setQuickStartDic:;
- (id)delegate;
- (id)resultHandler;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setResultHandler:;
- (id)stateInfo;
- (void)setStateInfo:;
@end
