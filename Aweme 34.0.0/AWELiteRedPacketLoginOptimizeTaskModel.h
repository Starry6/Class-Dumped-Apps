@interface AWELiteRedPacketLoginOptimizeTaskModel : AWELiteBaseApiModel
@property (nonatomic) BOOL hasTask;
@property (nonatomic) q componentStyle;
@property (nonatomic) AWELiteRedPacketLoginPageInfo loginPageInfoModel;
- (id)loginPageInfoModel;
- (void)setLoginPageInfoModel:;
- (void).cxx_destruct;
- (BOOL)hasTask;
- (void)setHasTask:;
- (long long)componentStyle;
- (void)setComponentStyle:;
+ (id)loginPageInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
