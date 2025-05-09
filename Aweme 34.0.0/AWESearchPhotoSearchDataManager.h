@interface AWESearchPhotoSearchDataManager : AWESearchBaseManager
@property (nonatomic) BOOL filterAweme;
@property (nonatomic) q shownCount;
@property (nonatomic) BOOL searchHasResult;
@property (nonatomic) BOOL searchHasMore;
@property (nonatomic) NSNumber searchCursor;
@property (nonatomic) NSString searchCellLevel;
@property (nonatomic) NSNumber searchCellRank;
@property (nonatomic) NSNumber searchCellRank2;
@property (nonatomic) <AWEHttpTask> requestTask;
@property (nonatomic) AWENetworkRequest networkRequest;
@property (nonatomic) NSDate lastRequestDate;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseResponse model;
@property (nonatomic) UIImage queryImage;
@property (nonatomic) NSString ecomSearchAllPassThrough;
@property (nonatomic) NSDictionary lastQueryParams;
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> currentSelectViewModel;
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> sortAndFilterCacheModel;
@property (nonatomic) CSPChunkRequestManager chunkRequestMangaer;
@property (nonatomic) AWESearchPhotoSearchRequestWrapper requestWrapper;
@property (nonatomic) AWESearchEcommercePhotoSearchDataResponse dataResponse;
@property (nonatomic) NSArray secondSectionResults;
@property (nonatomic) NSString currentFormat;
@property (nonatomic) AWEEcomSearchDataPrefetchModel prefetchModel;
@property (nonatomic) NSArray rawSearchResults;
@property (nonatomic) NSArray searchResults;
@property (nonatomic) q natureResultsCount;
@property (nonatomic) AWESearchFeelGoodModel feelGoodModel;
@property (nonatomic) NSString gid;
@property (nonatomic) NSString originalSearchID;
@property (nonatomic) AWESearchGlobalDoodleConfigModel extraModel;
@property (nonatomic) NSString enterFromSecond;
@property (nonatomic) NSDictionary preLogPassback;
@property (nonatomic) BOOL tosReady;
@property (nonatomic) NSString queryImageUri;
@property (nonatomic) NSString queryImageUrl;
@property (nonatomic) NSDictionary clientExtra;
@property (nonatomic) NSArray detections;
@property (nonatomic) NSArray videoQueryList;
@property (nonatomic) NSArray topCardItems;
@property (nonatomic) NSString detectionStr;
@property (nonatomic) NSNumber detectionIndex;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString searchSource;
@property (nonatomic) NSString generalGoodClickArea;
@property (nonatomic) q playMode;
@property (nonatomic) NSString searchChannel;
@property (nonatomic) NSString productId;
@property (nonatomic) NSString awemeId;
@property (nonatomic) NSString videoPlayTime;
@property (nonatomic) NSString engineStrategy;
@property (nonatomic) BOOL videoEntranceEnable;
@property (nonatomic) NSString productName;
@property (nonatomic) NSString shopID;
@property (nonatomic) NSString firstCategoryID;
@property (nonatomic) NSDictionary additionParams;
@property (nonatomic) NSString authorId;
@property (nonatomic) NSString roomId;
@property (nonatomic) NSDictionary federationInfo;
@property (nonatomic) NSMutableDictionary generalPassParams;
@property (nonatomic) NSMutableDictionary clickedProductIdDict;
@property (nonatomic) NSMutableDictionary onlyOnceParams;
@property (nonatomic) NSMutableDictionary eachTimeParams;
@property (nonatomic) NSString searchEntrance;
@property (nonatomic) q ecomSameCount;
@property (nonatomic) <AWESearchPhotoSearchDataManagerDelegate> delegate;
@property (nonatomic) NSString popupViewSchema;
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> currentPageViewModel;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseModel sortFilterModel;
@property (nonatomic) AWEDoubleColumnSearchActivityModel activityModel;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseModel originProductCardModel;
@property (nonatomic) @? parseResultsBlock;
@property (nonatomic) @? squashLeafViewModelBlock;
@property (nonatomic) @? generateCachalotViewModelBlock;
@property (nonatomic) @? mergeCachalotViewModelBlock;
@property (nonatomic) AWEEcomPhotoSearchDataCenter dataCenter;
@property (nonatomic) AWEEcomSearchPhotoSearchResponse responseModel;
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> guideSearchCacheViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasMore;
- (id)roomId;
- (void)setRoomId:;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)extraModel;
- (void)didReceiveJSON:;
- (void)chunkRequestDidEndWithCommonResponse:withError:forceCanceled:;
- (void)setExtraModel:;
- (id)dataCenter;
- (void)setAwemeId:;
- (void)setFederationInfo:;
- (id)awemeId;
- (id)clientExtra;
- (void)setClientExtra:;
- (void)setDataCenter:;
- (void)setShopID:;
- (id)shopID;
- (void)setCurrentFormat:;
- (id)videoPlayTime;
- (void)setVideoPlayTime:;
- (long long)shownCount;
- (void)setShownCount:;
- (id)feelGoodModel;
- (void)setFeelGoodModel:;
- (id)firstCategoryID;
- (void)setFirstCategoryID:;
- (BOOL)searchHasMore;
- (void)setSearchHasMore:;
- (void)loadMore:;
- (id)activityModel;
- (void)setActivityModel:;
- (id)searchCursor;
- (void)setSearchCursor:;
- (id)enterFromSecond;
- (void)setEnterFromSecond:;
- (id)searchChannel;
- (void)setSearchChannel:;
- (void)setVideoEntranceEnable:;
- (BOOL)videoEntranceEnable;
- (void)setSearchEntrance:;
- (id)searchEntrance;
- (id)rawSearchResults;
- (void)setRawSearchResults:;
- (void)resetWithClearingResults:;
- (id)searchCellLevel;
- (void)p_handleRefreshServerTimeCost:;
- (id)frequencySearchMerchandiseStatusMsg:;
- (id)ecomSearchAllPassThrough;
- (void)setEcomSearchAllPassThrough:;
- (void)setOriginalSearchID:;
- (void)setRequestWrapper:;
- (void)setSearchHasResult:;
- (void)setSearchCellLevel:;
- (id)searchCellRank;
- (void)setSearchCellRank:;
- (long long)natureResultsCount;
- (void)setNatureResultsCount:;
- (id)requestWrapper;
- (void)refreshSearchResultsBasedOnCurrentFormat;
- (BOOL)searchHasResult;
- (id)originalSearchID;
- (id)getCustomizedNoResultModel;
- (id)popupViewSchema;
- (void)setPopupViewSchema:;
- (void)setOnlyOnceParams:;
- (void)setEachTimeParams:;
- (void)setGeneralPassParams:;
- (void)setClickedProductIdDict:;
- (id)queryImageUri;
- (id)detectionStr;
- (id)detectionIndex;
- (void)requestImage:ImageUrl:detection:detectionIndex:queryParams:cursor:detectionsBlock:completion:;
- (void)setGeneralGoodClickArea:;
- (void)setLastQueryParams:;
- (id)lastQueryParams;
- (void)loadMoreWithQueryParams:channel:completion:;
- (void)handleResponse:error:imageUri:isLoadmore:completion:;
- (BOOL)tosReady;
- (void)setQueryImageUri:;
- (void)setTosReady:;
- (void)setPreLogPassback:;
- (void)setTopCardItems:;
- (void)setSortFilterModel:;
- (id)sortFilterModel;
- (void)setOriginProductCardModel:;
- (id)originProductCardModel;
- (void)setDetectionStr:;
- (void)setDetectionIndex:;
- (void)setPrefetchModel:;
- (void)hitPreRequest:withDetectionBlock:response:completion:;
- (id)generalGoodClickArea;
- (id)queryImageUrl;
- (id)additionParams;
- (void)setAdditionParams:;
- (id)onlyOnceParams;
- (id)eachTimeParams;
- (id)generalPassParams;
- (id)clickedProductIdDict;
- (id)federationInfo;
- (void)searchImage:queryParams:detectionsBlock:completion:;
- (void)searchImageWithImageUrl:detection:detectionIndex:searchSource:generalGoodClickArea:completion:;
- (void)reloadWithImage:queryParams:completion:;
- (void)loadMoreFromFeedWithChannel:completion:;
- (id)preLogPassback;
- (id)topCardItems;
- (BOOL)filterAweme;
- (void)setFilterAweme:;
- (id)searchCellRank2;
- (void)setSearchCellRank2:;
- (id)networkRequest;
- (void)setNetworkRequest:;
- (id)queryImage;
- (void)setQueryImage:;
- (id)prefetchModel;
- (void)setQueryImageUrl:;
- (id)mergeFederationInfo:intoExtra:;
- (id)currentDataStore;
- (id)chunkRequestMangaer;
- (void)setChunkRequestMangaer:;
- (id)constructRequestParameters:DetectionIndex:isLoadmore:QueryParams:;
- (id)generateCachalotViewModelBlock;
- (void)setVideoQueryList:;
- (void)updateKeyWordWithIndexIfNeeded:;
- (void)setCurrentSelectViewModel:;
- (void)setCurrentPageViewModel:;
- (BOOL)moreSectionEnable;
- (id)p_generateOriginResponseWithNewResponse:withNodeViewModel:;
- (id)videoQueryList;
- (id)engineStrategy;
- (void)handleResponse:error:isLoadmore:completion:;
- (void)setEcomSameCount:;
- (long long)ecomSameCount;
- (id)allSectionResultWithResponse:isLoadmore:;
- (id)parseResponseWithStore:;
- (id)parseResultsBlock;
- (void)setSecondSectionResults:;
- (id)secondSectionSearchId;
- (void)requestImage:imageUrl:detection:detectionIndex:queryParams:cursor:requestDate:isLoadmore:detectionsBlock:completion:;
- (id)dataResponse;
- (BOOL)shouldInvokeCallbackWithData:;
- (void)processRawData:response:;
- (void)setDataResponse:;
- (void)loadMoreFromFeed:;
- (id)queryIdOfDetectionAtIndex:;
- (void)clearMoreSectionCacheData;
- (void)setEngineStrategy:;
- (id)currentPageViewModel;
- (void)setParseResultsBlock:;
- (id)squashLeafViewModelBlock;
- (void)setSquashLeafViewModelBlock:;
- (void)setGenerateCachalotViewModelBlock:;
- (id)mergeCachalotViewModelBlock;
- (void)setMergeCachalotViewModelBlock:;
- (id)currentSelectViewModel;
- (id)sortAndFilterCacheModel;
- (void)setSortAndFilterCacheModel:;
- (id)guideSearchCacheViewModel;
- (id)secondSectionResults;
- (void)setModel:;
- (void)setProductName:;
- (id)productName;
- (id)init;
- (id)gid;
- (id)delegate;
- (void)setGid:;
- (id)productId;
- (id)requestTask;
- (BOOL)hasMore;
- (id)model;
- (void)setRequestTask:;
- (void).cxx_destruct;
- (void)reset;
- (void)setDelegate:;
- (void)setSearchResults:;
- (id)searchResults;
- (void)clearSearchResults;
- (id)searchSource;
- (void)setSearchSource:;
- (void)cancelTask;
- (void)setProductId:;
- (id)detections;
- (id)lastRequestDate;
- (id)responseModel;
- (void)setResponseModel:;
- (void)setLastRequestDate:;
- (id)currentFormat;
- (void)setDetections:;
- (long long)playMode;
- (void)setPlayMode:;
- (id)authorId;
- (void)setAuthorId:;
+ (id)buildRequestParams:;
+ (id)buildBFFLayerClientParams;
+ (void)fetchScanPageConfigWithParams:completion:;
@end
