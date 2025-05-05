@interface BNSceneContract.STProfileParam : BNCommonAdapter.BNRouteBasicParam
@property (nonatomic) NSString userId;
@property (nonatomic) NSString artistId;
@property (nonatomic) NSString openUserId;
@property (nonatomic) NSString start_play;
@property (nonatomic) NSString scene_name;
@property (nonatomic) NSString from_page;
@property (nonatomic) NSString sub_scene_name;
@property (nonatomic) NSString navigate_to_sub_page;
- (id)artistId;
- (id)from_page;
- (id)navigate_to_sub_page;
- (id)openUserId;
- (id)scene_name;
- (void)setArtistId:;
- (void)setFrom_page:;
- (void)setNavigate_to_sub_page:;
- (void)setOpenUserId:;
- (void)setScene_name:;
- (void)setStart_play:;
- (void)setSub_scene_name:;
- (id)start_play;
- (id)sub_scene_name;
- (id)init;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
@end
