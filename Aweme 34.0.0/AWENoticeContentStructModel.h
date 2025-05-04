@interface AWENoticeContentStructModel : IESIMBaseApiModel
@property (nonatomic) NSString header;
@property (nonatomic) NSString footer;
@property (nonatomic) NSArray texts;
@property (nonatomic) AWENoticeContentStructNumberInfoModel numberInfoModel;
- (id)numberInfoModel;
- (void)setNumberInfoModel:;
- (id)footer;
- (id)header;
- (void).cxx_destruct;
- (void)setHeader:;
- (void)setFooter:;
- (void)setTexts:;
- (id)texts;
+ (id)textsJSONTransformer;
+ (id)numberInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
