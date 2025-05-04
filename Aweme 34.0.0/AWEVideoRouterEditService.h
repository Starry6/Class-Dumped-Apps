@interface AWEVideoRouterEditService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)startVideoEditViewControllerWithVideoPath:info:commercialAnchorModel:processDataBlock:;
- (void)imageTemplateAnchorClickedWithTemplateID:templateModelJson:extraParams:;
- (id)startVideoEditReplaceAudioWithAweme:info:;
- (id)startVideoEditReplaceAudioWithAweme:;
- (id)startVideoEditViewControllerWithAssetModel:info:processDataBlock:;
- (id)startImageEditWithParams:;
- (id)startImageReplaceAudioWithAweme:info:;
- (id)startVideoReplaceAudioWithAweme:info:;
- (id)startVideoReplaceAudioWithAweme:;
- (void)trackFilterLayerPageShowWithInfo:;
+ (BOOL)shouldInheritMusicInfoWhenReplaceMusicWithAwemeModel:info:;
+ (void)inheritMusicInfoToPublishModel:fromAwemeModel:info:;
+ (void)parseCommonParamsInfo:toPublishModel:;
@end
