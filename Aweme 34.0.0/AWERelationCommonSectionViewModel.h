@interface AWERelationCommonSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) q type;
@property (nonatomic) q fansCount;
@property (nonatomic) BOOL hasExpanded;
@property (nonatomic) AWEFansListFansCountWrapperModel fansCountWrapperModel;
- (void)setupViewModel;
- (void)fetchSectionData;
- (void)setFansCount:;
- (long long)fansCount;
- (void)setFansCountWrapperModel:;
- (id)fansCountWrapperModel;
- (void)setHasExpanded:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (BOOL)hasExpanded;
@end
