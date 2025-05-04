@interface AWESearchLynxRemainingResponseModel : AWEBaseApiModel
@property (nonatomic) NSDictionary remainingData;
@property (nonatomic) NSString msg;
@property (nonatomic) NSString scene;
@property (nonatomic) AWEDynamicPatchModel dynamicPatch;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray awemeListDic;
- (id)dynamicPatch;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setDynamicPatch:;
- (void)setAwemeListDic:;
- (id)awemeListDic;
- (id)remainingData;
- (void)setRemainingData:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (void)setMsg:;
- (id)msg;
+ (id)JSONKeyPathsByPropertyKey;
@end
