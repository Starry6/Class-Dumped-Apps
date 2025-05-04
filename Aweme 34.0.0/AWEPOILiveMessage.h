@interface AWEPOILiveMessage : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSDictionary responseData;
@property (nonatomic) NSString targetBizId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)initWithEventName:params:extra:;
- (BOOL)exceptTransmitToEventCenter;
- (id)targetBizId;
- (id)responseData;
- (void)setResponseData:;
- (void)setEventName:;
- (id)getResponse;
- (id)extra;
- (id)description;
- (void).cxx_destruct;
- (void)setResponse:;
- (id)eventName;
- (id)params;
- (void)setParams:;
+ (id)messageWithEventName:params:extra:;
+ (id)messageWithEventName:params:;
@end
