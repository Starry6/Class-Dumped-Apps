@interface AWEIMEmojiReplyUtility : NSObject
+ (id)propertyManager;
+ (void)removeEmojiWithKey:fromMessage:;
+ (void)sortProperties:;
+ (BOOL)shouldHandleEmojiReplyInnerPush;
+ (void)addEmojiWithKey:toMessage:replacedKey:;
+ (id)displayTextForEmojiReplyWithPropertyItem:message:latestMessageFromUserDisplayName:;
+ (double)emojiReplyHeight;
+ (double)emojiReplyTopMargin;
+ (id)fakeAddEmojiWithKey:toMessage:method:;
+ (BOOL)fakeRemoveEmojiWithKey:fromMessage:;
+ (id)findConfigForKey:;
+ (id)findGroupForKey:inGroups:;
+ (BOOL)hasSelfLovedMessage:key:;
+ (id)latestPropertyOfPropertyList:;
+ (void)matchMsgEmojiWithPropertyItem:forAttributedString:font:emojiImage:;
+ (id)propertyGroupsFromTTMsg:;
+ (id)propertyListOfPropertyGroups:;
+ (id)propertyLovedBySelf:;
+ (void)removeEmojiWithKey:senderUid:fromPropertyGroups:;
+ (BOOL)shouldDisplayEmojiReplyView;
+ (BOOL)shouldDisplayEmojiReplyViewWithMessageViewModel:;
+ (void)sortPropertyGroups:;
@end
