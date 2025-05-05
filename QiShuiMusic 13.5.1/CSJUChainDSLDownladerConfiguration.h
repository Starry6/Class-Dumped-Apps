@interface CSJUChainDSLDownladerConfiguration : NSObject
@property (nonatomic) CSJUChainDSLModel model;
@property (nonatomic) double uchainDSLBegin;
@property (nonatomic) NSString sessionID;
- (void)setUchainDSLBegin:;
- (double)uchainDSLBegin;
- (void)setSessionID:;
- (id)model;
- (id)sessionID;
- (void)setModel:;
- (void).cxx_destruct;
@end
