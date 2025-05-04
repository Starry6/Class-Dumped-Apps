@interface AWETeenContentManageResponseModel : MTLModel
@property (nonatomic) AWETeenParentManagePrefer data;
@property (nonatomic) Q statusCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)statusCode;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setStatusCode:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
