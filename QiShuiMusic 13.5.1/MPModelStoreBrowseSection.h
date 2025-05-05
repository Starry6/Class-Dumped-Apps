@interface MPModelStoreBrowseSection : MPModelObject
@property (nonatomic) NSString title;
@property (nonatomic) q sectionType;
@property (nonatomic) NSURL loadAdditionalContentURL;
@property (nonatomic) BOOL displaysAsGridCellInCarPlay;
@property (nonatomic) q uniformContentItemType;
@property (nonatomic) BOOL memberOfChartSet;
@property (nonatomic) BOOL brick;
@property (nonatomic) MPModelStoreBrowseResponse previouslyRetrievedNestedResponse;
@property (nonatomic) MPModelRadioStation radioStation;
@property (nonatomic) BOOL containsOnlyEditorialElements;
- (BOOL)containsOnlyEditorialElements;
- (void)setContainsOnlyEditorialElements:;
+ (id)__radioStation_KEY;
+ (id)__title_KEY;
+ (id)__loadAdditionalContentURL_KEY;
+ (id)__displaysAsGridCellInCarPlay_KEY;
+ (id)__sectionType_KEY;
+ (id)__uniformContentItemType_KEY;
+ (id)__memberOfChartSet_KEY;
+ (id)__brick_KEY;
+ (id)__previouslyRetrievedNestedResponse_KEY;
@end
