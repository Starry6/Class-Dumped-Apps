@interface AWEDefaultShareProcessModel : NSObject
@property (nonatomic) BOOL useBigIMType;
@property (nonatomic) NSNumber msgType;
@property (nonatomic) BDPUniqueID uniqueID;
@property (nonatomic) BDPSharePrepareModel prepareModel;
@property (nonatomic) BDPShareResultModel resultModel;
@property (nonatomic) NSDictionary messageContent;
@property (nonatomic) @? contextHandler;
@property (nonatomic) @? configurationHandler;
- (id)resultModel;
- (void)setMessageContent:;
- (void)setContextHandler:;
- (void)setResultModel:;
- (BOOL)useBigIMType;
- (void)setUseBigIMType:;
- (void)setPrepareModel:;
- (id)contextHandler;
- (id)configurationHandler;
- (id)uniqueID;
- (void)setUniqueID:;
- (void).cxx_destruct;
- (id)messageContent;
- (id)prepareModel;
- (id)msgType;
- (void)setMsgType:;
- (void)setConfigurationHandler:;
@end
