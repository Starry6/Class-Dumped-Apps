@interface IESECMarketingUserActionLaunchModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSArray dataList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataList:;
- (void)setStatusMsg:;
- (id)statusMsg;
- (void)setStatusCode:;
- (id)statusCode;
- (void).cxx_destruct;
- (id)dataList;
+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
