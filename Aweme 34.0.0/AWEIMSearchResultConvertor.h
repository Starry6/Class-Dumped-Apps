@interface AWEIMSearchResultConvertor : NSObject
+ (id)textInfoForResult:;
+ (id)cellItemForMessageResult:inConversation:;
+ (id)cellItemForConverstaion:;
+ (id)cellItemForResult:;
+ (long long)getShowSectionFromSearchType:;
+ (id)cellItemForMessageCount:;
+ (id)cellItemForMessageResult:;
+ (id)cellItemForMultiRecallResult:;
+ (id)cellItemForSpaceOptimizedResult:;
+ (id)p_cellTextInfoWithUser:andData:aliasHasPrefix:;
+ (BOOL)p_onlineStateWithObjcet:;
+ (long long)maxTitleLabelTextLength;
+ (BOOL)configItem:withMsg:spaceOptData:;
+ (id)timeTextForDate:;
+ (long long)maxSubTitleLabelTextLength;
+ (id)initItemWithCon:;
+ (void)configItemWithData:item:msg:;
+ (id)dateFormatterForD;
+ (id)getMultiRecallTowLineTextInfo:;
+ (id)getSpaceOptimizedTowLineTextInfo:;
+ (void)addParticipantData:andParticipantUser:toSubtitleInfo:needInsertPrefix:;
+ (id)getMultiRecallSubtitleInfo:;
@end
