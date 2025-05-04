@interface AWEIMCodeGenFriendsAlbumPrivilegeInfoModel : AWEBaseDataModel
@property (nonatomic) BOOL canEdit;
@property (nonatomic) BOOL canDelete;
- (BOOL)canDelete;
- (void)setCanDelete:;
- (BOOL)canEdit;
- (void)setCanEdit:;
+ (id)JSONKeyPathsByPropertyKey;
@end
