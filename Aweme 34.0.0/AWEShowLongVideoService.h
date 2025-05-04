@interface AWEShowLongVideoService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)longVideoAlbumFavoriteButtonWithButtonStyleType:;
- (id)aweShowLongVideoSelectEpisodePanelWithDataController:delegate:;
- (id)longVideoPlusDataController;
- (void)markFeedLongVideo;
- (void)clearFeedLongVideoMark;
- (BOOL)isFeedLongVideoMarked;
- (BOOL)aweLongVideoSelectPanelShowing;
- (id)createLongVideoWaterMarkView;
+ (Class)longVideoPlusUtil;
+ (id)showSelectPanelWithModel:delegate:;
+ (BOOL)getIsShowingLongVideoSelectPanel;
+ (void)setIsShowingLongVideoSelectPanel:;
+ (Class)longVideoPlusAwemeDetailCell;
+ (id)getLongVideoPlusDetailCellWithIdentifier:;
+ (Class)feedGeneralLongVideoCell;
+ (id)getLongVideoFeedCellWithIdentifier:;
+ (Class)longVideoPlusCell;
+ (id)getLongVideoTableCellWithIdentifier:;
+ (Class)longVideoTableViewCell;
+ (void)configLongVideoTableCellRecord:playTimeRecord:;
+ (void)configLongVideoTableCellSeekTag:enableSeekToTime:;
+ (Class)longVideoPlusInteractionFactory;
+ (id)getLongVideoLandscapeHighLightEntranceView;
@end
