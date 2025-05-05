@interface IESECStoreModuleDetailResponse : MTLModel
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) IESECURLModel backgroundImg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)backgroundImg;
- (void)setBackgroundImg:;
- (void)setStatusMsg:;
- (id)statusMsg;
- (void)setStatusCode:;
- (long long)statusCode;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
