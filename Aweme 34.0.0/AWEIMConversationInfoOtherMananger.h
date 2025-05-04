@interface AWEIMConversationInfoOtherMananger : NSObject
+ (void)fetchDataWithSource:conShortId:subscribers:;
+ (void)fetchDataWithSource:conversationID:conShortId:conversationType:subscribers:;
+ (void)fetchDataWithSource:conversationID:conShortId:conversationType:otherParams:subscribers:;
+ (void)fetchDataWithSource:conversationID:conShortId:conversationType:otherParams:complete:;
@end
