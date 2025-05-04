@interface AWESearchAIGCInputVideoRSPanelViewModel : NSObject
@property (nonatomic) AWESearchAIGCVideoRSResponseModel videoRSResponseModel;
@property (nonatomic) <AWESearchAIGCInputVideoRSPanelViewModelDelegate> delegate;
@property (nonatomic) q currentShowCount;
@property (nonatomic) NSArray unUsedRSList;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)currentShowCount;
- (void)setCurrentShowCount:;
- (id)initWithVideoRSResponseModel:delegate:;
- (id)unUsedRSList;
- (void)updateUnUsedRSListWithUsedModel:;
- (void)setVideoRSPanelIsShowing:;
- (id)videoRSPanelResponseModel;
- (void)videoRSPanelAddShowCount;
- (long long)videoRSPanelCurrentShowCount;
- (BOOL)videoRSPanelIsShowing;
- (void)updateUnUsedRSList;
- (id)videoRSResponseModel;
- (void)setVideoRSResponseModel:;
- (BOOL)isShowing;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setIsShowing:;
@end
