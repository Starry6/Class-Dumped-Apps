@interface IESLiveUserBadgeParser : NSObject
+ (id)parseUserBadgeInfo:withAppInfo:;
+ (id)accessibilityStringFromBadgeList:;
+ (id)badgeAttributedStringFromBadgeImages:withAlignFontSize:scale:;
+ (id)executeDSLBadgeLists:withAppInfo:;
+ (BOOL)executeDSLRule:withAppInfo:;
+ (id)imageFromBadgeLiveImage:;
+ (id)saas_badgeAttributedStringFromBadgeImages:withAlignFontSize:scale:;
@end
