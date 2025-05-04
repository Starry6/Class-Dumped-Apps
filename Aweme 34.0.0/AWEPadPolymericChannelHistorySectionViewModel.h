@interface AWEPadPolymericChannelHistorySectionViewModel : AWEPadPolymericChannelSlidableSectionViewModel
@property (nonatomic) BOOL customCanShow;
@property (nonatomic) AWEPadHistorySectionDataController dataController;
- (BOOL)canShow;
- (void)setDataController:;
- (void)fetchHistoryData;
- (BOOL)customCanShow;
- (void)setCustomCanShow:;
- (id)sectionBackgroundColor;
- (void).cxx_destruct;
- (id)dataController;
+ (id)viewModelWithModelsArray:;
@end
