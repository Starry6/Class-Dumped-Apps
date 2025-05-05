@interface HTSLiveHeartbeatPacket : GPBMessage
@property (nonatomic) NSMutableArray wrdsKeyVersionsArray;
@property (nonatomic) Q wrdsKeyVersionsArray_Count;
@property (nonatomic) q roomId;
+ (id)descriptor;
@end
