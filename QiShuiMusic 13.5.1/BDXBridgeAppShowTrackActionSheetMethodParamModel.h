@interface BDXBridgeAppShowTrackActionSheetMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString track;
@property (nonatomic) NSString et_params;
@property (nonatomic) NSString playlist_id;
@property (nonatomic) NSNumber show_explicit_icon;
@property (nonatomic) NSArray actions;
- (void)setPlaylist_id:;
- (id)et_params;
- (id)playlist_id;
- (void)setEt_params:;
- (void)setShow_explicit_icon:;
- (id)show_explicit_icon;
- (void)setActions:;
- (id)actions;
- (void).cxx_destruct;
- (id)track;
- (void)setTrack:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
