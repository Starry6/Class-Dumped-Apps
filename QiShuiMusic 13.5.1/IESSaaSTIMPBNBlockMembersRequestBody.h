@interface IESSaaSTIMPBNBlockMembersRequestBody : GPBMessage
@property (nonatomic) NSInteger blockStatus;
@property (nonatomic) BOOL hasBlockStatus;
@property (nonatomic) GPBInt64Int64Dictionary blockTime;
@property (nonatomic) Q blockTime_Count;
@property (nonatomic) q convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSMutableDictionary bizExt;
@property (nonatomic) Q bizExt_Count;
+ (id)descriptor;
@end
