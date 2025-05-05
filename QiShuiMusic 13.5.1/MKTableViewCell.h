@interface MKTableViewCell : UITableViewCell
@property (nonatomic) BOOL _mapkit_forceSeparatorFrameToCGRectZero;
@property (nonatomic) q _mapkit_separatorStyleOverride;
- (void)setSemanticContentAttribute:;
- (void)setSeparatorStyle:;
- (id)_separatorFrame;
- (void)set_mapkit_forceSeparatorFrameToCGRectZero:;
- (void)set_mapkit_separatorStyleOverride:;
- (void)_mapkit_disableSeparatorStyleOverride;
- (BOOL)_mapkit_forceSeparatorFrameToCGRectZero;
- (long long)_mapkit_separatorStyleOverride;
@end
