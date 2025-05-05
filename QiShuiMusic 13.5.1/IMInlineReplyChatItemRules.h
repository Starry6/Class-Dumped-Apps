@interface IMInlineReplyChatItemRules : IMTranscriptChatItemRules
@property (nonatomic) NSString threadIdentifier;
@property (nonatomic) NSString threadOriginatorMessageGUID;
@property (nonatomic) {_NSRange=QQ} threadOriginatorRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setThreadIdentifier:;
- (id)threadIdentifier;
- (void).cxx_destruct;
- (id)initWithChat:threadIdentifier:;
- (BOOL)_supportsContiguousChatItems;
- (id)_chatItemsWithReplyCountsForNewChatItems:messageItem:;
- (BOOL)_hasEarlierMessagesToLoad;
- (BOOL)_hasRecentMessagesToLoad;
- (id)_filteredChatItemsForNewChatItems:;
- (BOOL)_shouldAppendServiceForItem:previousItem:chatStyle:;
- (BOOL)_shouldShowReportSpamForChat:withItems:;
- (BOOL)_shouldAppendReplyContextForItem:previousItem:chatStyle:;
- (BOOL)_shouldAppendReplyCountIfNeeded;
- (id)threadOriginatorMessageGUID;
- (void)setThreadOriginatorMessageGUID:;
- (id)threadOriginatorRange;
- (void)setThreadOriginatorRange:;
@end
