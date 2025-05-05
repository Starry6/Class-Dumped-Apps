@interface IESSaaSTIMPBNGetStrangerConversationListRequestBody : GPBMessage
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) q count;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL showTotalUnread;
@property (nonatomic) BOOL hasShowTotalUnread;
@property (nonatomic) NSString bizInfo;
@property (nonatomic) BOOL hasBizInfo;
+ (id)descriptor;
@end
