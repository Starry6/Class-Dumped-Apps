@interface AWEIMNotificationGroupResponseModel : IESIMBaseApiModel
@property (nonatomic) NSMutableArray noticeGroupArray;
- (id)noticeGroupArray;
- (void)setNoticeGroupArray:;
- (void).cxx_destruct;
+ (id)noticeGroupArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
