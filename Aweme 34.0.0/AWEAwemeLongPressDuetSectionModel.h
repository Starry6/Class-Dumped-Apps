@interface AWEAwemeLongPressDuetSectionModel : AFDLongPressBaseSectionViewModel
@property (nonatomic) BOOL hasLinkedModels;
- (void)linkModelsIfNeeded;
- (BOOL)hasLinkedModels;
- (void)setHasLinkedModels:;
- (void)createDuetVideo;
- (long long)linkModelsIfNeededAndGetNumberOfModels;
@end
