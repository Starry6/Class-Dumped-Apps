@interface AWEPlayInteractionSocialTagsViewModel : NSObject
@property (nonatomic) NSMutableArray cellWidthList;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) double leftContainerWidth;
- (id)awemeModel;
- (void)setAwemeModel:;
- (double)leftContainerWidth;
- (void)setLeftContainerWidth:;
- (void)onSocialTagShow;
- (BOOL)updateTagConfigWithAwemeModel:;
- (id)iconImageURLWithIndex:;
- (id)tagTextWithIndex:;
- (BOOL)shouldShowArrowWithIndex:;
- (id)schemaWithIndex:;
- (void)onSocialTagClickWithIndex:;
- (id)sizeForItemWithIndex:;
- (id)cellWidthList;
- (void)__configCellSize;
- (void)trackSocialTagShowWithIndex:;
- (void)trackSocialTagClickWithIndex:;
- (void)setCellWidthList:;
- (id)init;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
