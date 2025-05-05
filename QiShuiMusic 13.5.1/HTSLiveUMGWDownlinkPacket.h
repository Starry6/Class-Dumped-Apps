@interface HTSLiveUMGWDownlinkPacket : GPBMessage
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMessage;
@property (nonatomic) q uniqueId;
@property (nonatomic) NSInteger eventType;
@property (nonatomic) HTSLiveUMGWEventData eventData;
@property (nonatomic) BOOL hasEventData;
+ (id)descriptor;
@end
