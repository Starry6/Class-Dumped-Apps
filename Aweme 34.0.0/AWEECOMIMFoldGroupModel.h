@interface AWEECOMIMFoldGroupModel : NSObject
@property (nonatomic) <AWEECOMIMPaasMessageBridgeProtocol> anchorMessage;
@property (nonatomic) AWEECOMIMFoldInfoModel anchorFoldInfo;
@property (nonatomic) q anchorReadIndex;
@property (nonatomic) q latestReadIndex;
@property (nonatomic) NSMutableArray foldOriginMessageArr;
@property (nonatomic) AWEECOMIMFoldGroupConfig foldGroupConfig;
- (id)anchorMessage;
- (id)foldOriginMessageArr;
- (id)anchorFoldInfo;
- (void)updateWithAnchorMessage:anchorFoldInfo:;
- (long long)anchorReadIndex;
- (void)updateWithAnchorReadIndex:;
- (long long)latestReadIndex;
- (void)updateWithLatestReadIndex:;
- (void)setFoldOriginMessageArr:;
- (void)setFoldGroupConfig:;
- (id)foldGroupConfig;
- (void).cxx_destruct;
@end
