@interface IESECAuthorConnectMessage : GPBMessage
@property (nonatomic) NSInteger msgType;
@property (nonatomic) NSString toast;
@property (nonatomic) GPBInt64Array ecomLinkmicRoomIdsArray;
@property (nonatomic) Q ecomLinkmicRoomIdsArray_Count;
@property (nonatomic) NSMutableArray linkmicPopRoomsArray;
@property (nonatomic) Q linkmicPopRoomsArray_Count;
+ (id)descriptor;
@end
