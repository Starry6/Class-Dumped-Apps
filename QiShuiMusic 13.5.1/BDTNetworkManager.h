@interface BDTNetworkManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)asyncRequestForURL:method:queryParameters:postParameters:callback:callbackQueue:encrypt:tagType:;
- (void)asyncRequestForURL:method:queryParameters:postParameters:callback:callbackQueue:encrypt:tagType:;
- (id)createTaggedHeaderFieldWith:type:;
- (void)tvRequestForJSONWithResponse:params:method:needCommonParams:headerField:callback:tagType:;
- (void)tvRequestForJSONWithResponse:params:method:needCommonParams:headerField:callback:tagType:;
- (void)uploadEvent:param:;
- (void)uploadEvent:param:;
- (id)networkType;
- (id)networkType;
- (id)init;
- (void)setup;
- (void)setup;
+ (void)asyncRequestForURL:method:queryParameters:postParameters:callback:callbackQueue:encrypt:tagType:;
+ (void)tvRequestForJSONWithResponse:params:method:needCommonParams:headerField:callback:tagType:;
+ (void)uploadEvent:param:;
+ (id)networkType;
+ (id)sharedInstance;
@end
