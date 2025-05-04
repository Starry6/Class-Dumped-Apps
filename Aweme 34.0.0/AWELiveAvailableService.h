@interface AWELiveAvailableService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLiving;
- (BOOL)isAudienceDuringLive;
- (id)liveCurrencyName;
- (BOOL)isInteractLinkingMicSmallWindowShowingWithErrorToast:;
- (BOOL)isLiveAvailable;
- (BOOL)canEnterLiveRoom:;
- (id)getFeedLiveMarkViewWithFrame:;
- (id)livePreviewCellReuseIdentifier;
- (id)liveDetailCellReuseIdentifier;
- (id)livePreviewCellClassName;
- (id)liveDetailCellClassName;
- (id)livePreviewCellReuseIdentifierAndCellClassNamePair;
- (id)liveDetailCellReuseIdentifierAndCellClassNamePair;
- (void)registerLiveCellForTableView:;
- (id)getLiveDetailTableViewCellWithReuseIdentifier:bottomOffset:showLandscape:;
- (id)liveEntry;
@end
