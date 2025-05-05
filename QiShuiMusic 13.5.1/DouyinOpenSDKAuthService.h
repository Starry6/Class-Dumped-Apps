@interface DouyinOpenSDKAuthService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)URLArrayFromConsumerSendReq:;
+ (id)consumerSendRespFromURL:;
+ (BOOL)isSchemaJumpToDouyin:;
+ (id)reqClassName;
+ (id)schemaForRequest:;
+ (id)serviceName;
@end
