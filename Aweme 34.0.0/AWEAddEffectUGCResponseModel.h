@interface AWEAddEffectUGCResponseModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString message;
@property (nonatomic) NSString ugcId;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ugcId;
- (void)setUgcId:;
- (id)statusCode;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (void)setStatusCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
