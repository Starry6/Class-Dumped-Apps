@interface AWEMixDetailInformationPageContext : AWEPageContext
@property (nonatomic) AWEMixVideoModel mixVideoModel;
@property (nonatomic) BOOL fromPersonPage;
@property (nonatomic) AWEMixDetailInformationTracker tracker;
- (id)mixVideoModel;
- (void)setMixVideoModel:;
- (BOOL)fromPersonPage;
- (void)setFromPersonPage:;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
@end
