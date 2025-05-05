@interface IESLiveSaaSPBRoomDataSyncMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q roomId;
@property (nonatomic) NSString syncKey;
@property (nonatomic) q version;
@property (nonatomic) NSData payload;
@property (nonatomic) NSString bizLogId;
+ (id)descriptor;
@end
