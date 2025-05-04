@interface AWEMVDataLiveTransferPlugin : NSObject
@property (nonatomic) AWEMVChannelPageContext mvContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)liveModuleService;
- (id)transferAwemeListIfNeededWithArray:isInitFetch:;
- (id)transferAwemeModelForLive:;
- (id)mvContext;
- (void)setMvContext:;
- (void)onFilterResponse:context:;
- (id)filterLiveDataWithArray:;
- (void).cxx_destruct;
@end
