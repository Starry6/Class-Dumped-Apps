@interface AWEECFeedEntranceRequestBuilder : NSObject
@property (nonatomic) NSString jsonString;
@property (nonatomic) NSMutableDictionary passthroughDict;
@property (nonatomic) NSMutableDictionary internalFlowExtraData;
@property (nonatomic) NSMutableDictionary goodsDetailExtraData;
@property (nonatomic) NSString curSceneID;
@property (nonatomic) NSString metaParamsString;
@property (nonatomic) NSMutableDictionary commonInsertEntranceInfo;
@property (nonatomic) AWEECFeedEntranceRequest entranceRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enterMethod;
- (void)setPassthroughDict:;
- (id)searchParams;
- (id)carrierType;
- (id)passthroughDict;
- (id)buildProductEntranceClick;
- (id)buildProductAnchorClick;
- (id)entranceRequest;
- (id)goodsDetailExtraDataWithEntranceInfo:;
- (id)buildInternalFlowShowRequestWillOpenHalfPage:willClosePage:closeHalfPageProgress:oneStepOrderCompletion:complete:;
- (id)buildWJPPanelStyleGoodsDetailRequestWillOpenHalfPage:willClosePage:closeHalfPageProgress:complete:;
- (void)trackAdEventShoppingClick;
- (void)trackAdrwAdClick;
- (void)trackAdEventCartClick;
- (void)trackAdEventShoppingClickWithAdExtraData;
- (void)trackAdEventClick;
- (void)trackAdEventTrackLabelClick;
- (void)setCurSceneID:;
- (id)commonInsertEntranceInfo;
- (void)p_setupData;
- (id)metaParamsString;
- (id)curSceneID;
- (id)internalFlowExtraData;
- (id)goodsDetailExtraData;
- (id)sourceMethod;
- (BOOL)fromStoreVideo;
- (id)recommendTypeEventDescription;
- (id)composeEntranceInfoFormDict:scene:;
- (void)setEntranceRequest:;
- (void)setInternalFlowExtraData:;
- (void)setGoodsDetailExtraData:;
- (void)setMetaParamsString:;
- (void)setCommonInsertEntranceInfo:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)jsonString;
- (void)setJsonString:;
@end
