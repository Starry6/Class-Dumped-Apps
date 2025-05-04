@interface AWEMRSubscribeManageServiceSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) NSMutableSet trackCellShowSet;
@property (nonatomic) q type;
- (void)trackCellClickWithModel:;
- (void)trackCellShowWithModel:;
- (id)trackCellShowSet;
- (void)setTrackCellShowSet:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
@end
