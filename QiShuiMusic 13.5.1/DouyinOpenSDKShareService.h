@interface DouyinOpenSDKShareService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)URLArrayFromConsumerSendReq:;
+ (BOOL)checkReqValidWithShareReq:;
+ (id)consumerSendRespFromURL:;
+ (BOOL)isSchemaJumpToDouyin:;
+ (id)reqClassName;
+ (id)schemaForRequest:;
+ (id)serviceName;
@end
