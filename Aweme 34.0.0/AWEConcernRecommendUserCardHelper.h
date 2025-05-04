@interface AWEConcernRecommendUserCardHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)insertRecommendCardIfNeedWithResponse:currentDataSource:;
+ (void)addFollowFeedRecommendCardParams:logExtraDict:referString:;
+ (BOOL)alreadyLoginEnableShowFollowFeedRecommendCard;
+ (BOOL)alreadyLoginEnableEmptyShowFollowFeedRecommendCard;
+ (BOOL)shouldUseBigCardStyle;
+ (id)IPad_BigStyleSize;
+ (id)IPad_SmallStyleSizeForMultiCard;
+ (id)IPad_SmallStyleSizeForSingleCard;
+ (id)createCellViewController;
+ (long long)alreadyLoginRecommendRequestCount;
+ (long long)alreadyLoginRecommendMaxCount;
+ (id)findAwemeToDisplayForAuthor:;
+ (id)dragContainerSizeForSingleCard;
+ (id)IPadRotate_dragContainerSizeForMultiCardPortraitWithSize:;
+ (id)IPadRotate_dragContainerSizeForMultiCardLandscapeWithSize:;
+ (id)IPadRotate_dragContainerSizeForSingleCardPortraitWithSize:;
+ (id)IPadRotate_dragContainerSizeForSingleCardLandscapeWithSize:;
+ (void)trackFollowFromRecUserForConcernIfNeed:trackParam:;
+ (id)recommendCardParamDict;
+ (void)enterAwemeDetailTableViewControllerWithModel:extraParam:;
+ (void)enterPersonalHomepageWithUser:enterFrom:extraParam:;
@end
