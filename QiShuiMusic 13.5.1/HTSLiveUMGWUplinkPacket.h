@interface HTSLiveUMGWUplinkPacket : GPBMessage
@property (nonatomic) q uniqueId;
@property (nonatomic) NSInteger eventType;
@property (nonatomic) HTSLiveUMGWEventData eventData;
@property (nonatomic) BOOL hasEventData;
+ (id)descriptor;
@end
