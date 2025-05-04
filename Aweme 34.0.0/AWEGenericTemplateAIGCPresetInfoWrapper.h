@interface AWEGenericTemplateAIGCPresetInfoWrapper : NSObject
@property (nonatomic) NPAIGCRequestInfo_OC requestInfo;
@property (nonatomic) NSArray aigcSlotInfos;
@property (nonatomic) NPPreprocessAIGCCallback_OC callback;
@property (nonatomic) NSArray aigcResultList;
- (id)aigcSlotInfos;
- (void)setAigcSlotInfos:;
- (id)aigcResultList;
- (void)setAigcResultList:;
- (void)setCallback:;
- (id)callback;
- (void).cxx_destruct;
- (id)requestInfo;
- (void)setRequestInfo:;
@end
