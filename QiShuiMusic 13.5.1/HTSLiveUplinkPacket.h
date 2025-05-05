@interface HTSLiveUplinkPacket : GPBMessage
@property (nonatomic) q uniqueId;
@property (nonatomic) q serviceId;
@property (nonatomic) NSMutableDictionary queryParams;
@property (nonatomic) Q queryParams_Count;
@property (nonatomic) NSMutableDictionary headers;
@property (nonatomic) Q headers_Count;
@property (nonatomic) NSString uri;
@property (nonatomic) NSData payload;
@property (nonatomic) NSInteger statusCode;
@property (nonatomic) NSString statusMessage;
@property (nonatomic) NSInteger uplinkStrategy;
+ (id)descriptor;
@end
