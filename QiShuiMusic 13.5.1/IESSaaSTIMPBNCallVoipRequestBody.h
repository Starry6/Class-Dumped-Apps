@interface IESSaaSTIMPBNCallVoipRequestBody : GPBMessage
@property (nonatomic) GPBInt64Array calleeIdsArray;
@property (nonatomic) Q calleeIdsArray_Count;
@property (nonatomic) NSString channelId;
@property (nonatomic) BOOL hasChannelId;
@property (nonatomic) NSInteger vType;
@property (nonatomic) BOOL hasVType;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
@property (nonatomic) GPBInt64Array refChannelUsersArray;
@property (nonatomic) Q refChannelUsersArray_Count;
@property (nonatomic) NSString conId;
@property (nonatomic) BOOL hasConId;
+ (id)descriptor;
@end
