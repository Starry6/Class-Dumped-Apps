@interface AWEEcomSearchStreamRequestImpl : NSObject
@property (nonatomic) CSPChunkRequestManager chunkRequestMangaer;
@property (nonatomic) AWEEcomSearchDataPrefetchModel prefetchModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didReceiveJSON:;
- (void)chunkRequestDidEndWithCommonResponse:withError:forceCanceled:;
- (void)setPrefetchModel:;
- (id)prefetchModel;
- (void)requestWithModel:;
- (id)chunkRequestMangaer;
- (void)setChunkRequestMangaer:;
- (id)init;
- (void).cxx_destruct;
@end
