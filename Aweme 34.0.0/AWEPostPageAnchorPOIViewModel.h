@interface AWEPostPageAnchorPOIViewModel : AWEPostPageAnchorViewModel
@property (nonatomic) NSString currentFullType;
@property (nonatomic) AWEPostPagePOIActivityViewModel activityVM;
@property (nonatomic) AWEPostPagePOIRightDetailLabelViewModel rightDetailTextVM;
@property (nonatomic) AWEPostPageAdvancedPOISettingsViewModel advancedPOISettingsVM;
@property (nonatomic) q poiCellAccessState;
- (id)currentFullType;
- (void)setCurrentFullType:;
- (void)setActivityVM:;
- (void)setAdvancedPOISettingsVM:;
- (id)activityVM;
- (id)rightDetailTextVM;
- (void)setRightDetailTextVM:;
- (id)advancedPOISettingsVM;
- (long long)poiCellAccessState;
- (void)setPoiCellAccessState:;
- (void).cxx_destruct;
@end
