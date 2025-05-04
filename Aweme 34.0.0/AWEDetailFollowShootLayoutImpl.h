@interface AWEDetailFollowShootLayoutImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutForHeaderCell:model:;
- (double)heightForHeaderModel:;
- (void)layoutForSchemasCell:model:tapAction:;
- (double)heightForSchemasModel:;
- (void)layoutForSeparateLineCell:model:;
- (double)heightForSeparateLineModel:;
- (void)layoutForAskPermissionCell:model:;
- (double)heightForAskPermissionModel:;
- (void)layoutForEmptyCell:model:;
- (double)heightForEmptyModel:;
@end
