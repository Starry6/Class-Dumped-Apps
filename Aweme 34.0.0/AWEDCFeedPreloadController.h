@interface AWEDCFeedPreloadController : AWEDCFeedBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preloadCoverImageWithAweme:;
- (void)preloadInnerInsImageWithAweme:;
- (void)preloadAwemeVideoContent:;
- (void)cancelPreloadVideo;
- (id)preloadCutomHeader:;
- (void)startPrefetchVideo:tag:customHeaderDic:successBlock:failureBlock:cancelBlock:;
- (id)getBussinessID;
@end
