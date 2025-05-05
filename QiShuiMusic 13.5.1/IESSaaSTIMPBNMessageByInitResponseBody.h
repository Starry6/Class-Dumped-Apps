@interface IESSaaSTIMPBNMessageByInitResponseBody : GPBMessage
@property (nonatomic) NSMutableArray messagesArray;
@property (nonatomic) Q messagesArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) q nextInitVersion;
@property (nonatomic) BOOL hasNextInitVersion;
@property (nonatomic) q version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) q userCursor;
@property (nonatomic) BOOL hasUserCursor;
@property (nonatomic) q cmdIndex;
@property (nonatomic) BOOL hasCmdIndex;
+ (id)descriptor;
@end
