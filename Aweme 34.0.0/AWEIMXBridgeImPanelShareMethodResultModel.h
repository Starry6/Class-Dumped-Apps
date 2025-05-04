@interface AWEIMXBridgeImPanelShareMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber resultCode;
@property (nonatomic) NSArray uidList;
@property (nonatomic) NSArray cidList;
@property (nonatomic) NSArray secUidList;
- (id)uidList;
- (void)setUidList:;
- (id)cidList;
- (void)setCidList:;
- (void)setSecUidList:;
- (id)secUidList;
- (id)resultCode;
- (void).cxx_destruct;
- (void)setResultCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
