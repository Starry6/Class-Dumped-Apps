@interface AWEIMNoticedetailResponseModel : IESIMBaseApiModel
@property (nonatomic) NSMutableArray noticeList;
- (id)noticeList;
- (void)setNoticeList:;
- (void).cxx_destruct;
+ (id)noticeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
