@interface AWETheaterMoreFeedSmallCardCellViewModel : NSObject
@property (nonatomic) NSDateFormatter yearDateFormatter;
@property (nonatomic) NSMutableDictionary tagsInfoDict;
@property (nonatomic) AWETheaterMoreFeedSectionItem sectionItem;
@property (nonatomic) BOOL isShowingDislikeMask;
@property (nonatomic) NSDictionary feedbackInfo;
- (BOOL)isShowingDislikeMask;
- (void)setIsShowingDislikeMask:;
- (id)feedbackInfo;
- (void)setFeedbackInfo:;
- (id)moreFeedUpdateInfoText;
- (id)buildLongVideoTagsInfoLimitWidth:;
- (double)getActualWidthWithStr:;
- (void)setYearDateFormatter:;
- (id)tagsInfoDict;
- (void)setTagsInfoDict:;
- (id)init;
- (void).cxx_destruct;
- (id)yearDateFormatter;
- (void)setSectionItem:;
- (id)sectionItem;
+ (double)smallCardInfoViewHeight;
+ (id)videoTagInfoLabelFont;
@end
