@interface AWEIMGroupSPAdapterService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)asyncGetGroupSPDowngradeWithConversationID:;
- (BOOL)canTriggerGroupSPNoticeLink;
- (id)groupSPNoticeLinkRejectedDescription;
- (id)modifiedSchemaWithOriginSchemaString:conversationID:;
- (BOOL)canShowActionRecord:onConversationID:;
- (BOOL)canShowNormalTaskPopup;
- (BOOL)isGroupSPDowngradeWithConversationID:;
+ (id)sharedIntance;
@end
