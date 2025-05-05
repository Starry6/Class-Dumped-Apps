@interface IESECMarketingApi : NSObject
@property (nonatomic) BOOL openWithSaaS;
@property (nonatomic) NSString baseURLString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchMarketingUserActionRulesWithParams:headers:callback:;
- (id)initWithOpenWithSaaS:;
- (BOOL)openWithSaaS;
- (id)request:apiPath:postMethod:headers:parameters:modelClass:callback:;
- (id)request:apiPath:postMethod:parameters:modelClass:callback:;
- (id)request:postMethod:parameters:modelClass:callback:;
- (void)setOpenWithSaaS:;
- (id)init;
- (void).cxx_destruct;
- (id)baseURLString;
- (void)setBaseURLString:;
+ (id)new;
@end
