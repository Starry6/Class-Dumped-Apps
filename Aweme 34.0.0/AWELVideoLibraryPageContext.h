@interface AWELVideoLibraryPageContext : AWELVideoBasePageContext
@property (nonatomic) {CGSize=dd} filterAreaSize;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) AWELVideoLibraryFilterDataController filterDataController;
@property (nonatomic) AWELVideoLibraryResultDataController resultDataController;
@property (nonatomic) NSString trackParamModule;
- (id)filterDataController;
- (void)setFilterDataController:;
- (id)filterAreaSize;
- (void)setFilterAreaSize:;
- (id)resultDataController;
- (void)setResultDataController:;
- (id)trackParamModule;
- (void)setTrackParamModule:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
@end
