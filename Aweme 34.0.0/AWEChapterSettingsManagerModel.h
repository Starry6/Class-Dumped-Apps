@interface AWEChapterSettingsManagerModel : NSObject
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSMutableArray itemsArray;
- (void)setEnterMethod:;
- (id)enterMethod;
- (BOOL)shouldShowChapterRecommendAuto;
- (id)chapterRecommendAutoModel;
- (void).cxx_destruct;
- (id)itemsArray;
- (void)setItemsArray:;
@end
