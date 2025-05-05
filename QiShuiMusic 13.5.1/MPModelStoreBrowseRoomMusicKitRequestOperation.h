@interface MPModelStoreBrowseRoomMusicKitRequestOperation : MPStoreModelRequestOperation
- (void).cxx_destruct;
- (id)configurationForLoadingModelDataWithStoreURLBag:error:;
- (void)produceResponseWithLoadedOutput:completion:;
- (id)_produceResponseWithParser:results:error:;
- (id)_roomURLWithRoomID:storeURLBag:;
@end
