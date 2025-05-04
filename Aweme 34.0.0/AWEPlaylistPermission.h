@interface AWEPlaylistPermission : AWEBaseApiModel
@property (nonatomic) BOOL editEnable;
@property (nonatomic) BOOL editSongEnable;
@property (nonatomic) BOOL privacyEnable;
@property (nonatomic) BOOL collectEnable;
@property (nonatomic) BOOL deleteEnable;
- (void)setCollectEnable:;
- (BOOL)collectEnable;
- (void)setEditEnable:;
- (void)setEditSongEnable:;
- (void)setPrivacyEnable:;
- (void)setDeleteEnable:;
- (BOOL)editEnable;
- (BOOL)editSongEnable;
- (BOOL)privacyEnable;
- (BOOL)deleteEnable;
+ (id)JSONKeyPathsByPropertyKey;
@end
