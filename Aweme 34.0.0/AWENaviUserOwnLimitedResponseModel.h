@interface AWENaviUserOwnLimitedResponseModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMessage;
@property (nonatomic) NSArray data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusCode;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setStatusCode:;
- (void)setStatusMessage:;
- (id)statusMessage;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
