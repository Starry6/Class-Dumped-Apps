@interface AWEIMMessageGroup : NSObject
@property (nonatomic) double latestMessageTime;
@property (nonatomic) double oldestMessageTime;
@property (nonatomic) NSMutableArray messageViewModelArray;
@property (nonatomic) Q groupType;
- (void)addMessageViewModel:;
- (id)initWithGroupedMessages:;
- (void)insertMessage:atIndex:;
- (double)latestMessageTime;
- (id)messageViewModelArray;
- (double)oldestMessageTime;
- (void)p_updateMessageTime;
- (void)setLatestMessageTime:;
- (void)setMessageViewModelArray:;
- (void)setOldestMessageTime:;
- (unsigned long long)groupType;
- (void)setGroupType:;
- (void).cxx_destruct;
- (void)addMessage:;
- (id)copyWithZone:;
+ (id)deleteMessageWithMessageIdentifier:busiType:fromGroups:;
+ (id)groupsWithOrderedMessages:;
+ (id)insertMessage:intoGroups:;
+ (id)insertMessage:intoGroups:needCheckDuplicate:;
+ (id)latestMessageInGroups:;
+ (id)oldestMessageInGroups:;
@end
