@interface AWEStudioSwiftImpl.AIEnhanceServiceImpl : HTSService
- (id)fetchAIEnhanceSecondaryPage:completion:;
- (id)requestEnhanceAIP:creationID:bizType:stepName:algoReqJSONStr:inputImagesIdentifier:uploadUseBinary:uploadBytesLimit:downloadUseBinary:progressCallback:completion:;
- (id)fetchAIPCacheResult:stepName:algoReqJSONStr:inputImagesIdentifier:;
- (void)cleanAIPCache;
- (id)init;
- (void).cxx_destruct;
@end
