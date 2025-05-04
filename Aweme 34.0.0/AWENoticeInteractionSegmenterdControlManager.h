@interface AWENoticeInteractionSegmenterdControlManager : UIView
- (id)initWithFrame:;
- (id)initWithCoder:;
+ (long long)landTypeBy:;
+ (long long)unreadCountWithCellModelType:;
+ (id)noticeCountBindWithCellModelType:;
+ (id)subTabsModelsWithItemType:;
+ (id)convertCellModelWithModels:;
+ (void)trackFilterShowBy:accountType:action:;
+ (id)getDictionaryFromJSONStringWithJsonString:;
@end
