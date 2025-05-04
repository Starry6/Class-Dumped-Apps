@interface AWEFavoriteTemplatesDetailPageController : NSObject
@property (nonatomic) <ACCMVTemplatesDataControllerProtocol> dataController;
@property (nonatomic) UIViewController<ACCMVTemplatesDetailTableViewController> detailVC;
@property (nonatomic) q initIndex;
@property (nonatomic) BOOL isMergeTab;
- (void)setDataController:;
- (id)detailVC;
- (void)setDetailVC:;
- (BOOL)isMergeTab;
- (void)setIsMergeTab:;
- (void)setInitIndex:;
- (long long)initIndex;
- (id)initWithDataController:initIndex:isMergeTab:;
- (void)enterTemplateDetail;
- (void)p_setupDetailVCCallback;
- (void).cxx_destruct;
- (id)dataController;
+ (id)p_cutsameEnterAlbumWithTemplateModel:;
+ (id)p_pixelEnterAlbumWithTemplateModel:;
@end
