@interface AWEIMMenuDeleteComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShowItemWithMessage:context:;
- (id)menuItemTitle:context:;
- (id)menuItemImageName:context:;
- (id)menuTrackerName:context:;
- (unsigned long long)menuItemType;
- (void)didClickItemWithMessage:context:;
- (id)menuItemLightImageURL:context:;
- (id)menuItemDarkImageURL:context:;
- (void)p_delete:context:;
- (void)p_deleteCellDoubleCheck:context:;
- (void)p_bizTrackDeleteMsg:convContext:;
- (void)p_reportDelete:;
- (id)p_addMomentMessageParams:;
@end
