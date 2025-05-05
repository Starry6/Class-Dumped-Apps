@interface AWEIMNotificationGroupResponseModelNew : IESIMBaseApiModel
@property (nonatomic) NSMutableArray noticeGroupArray;
@property (nonatomic) NSDictionary extra;
- (id)noticeGroupArray;
- (void)setExtra:;
- (void)setNoticeGroupArray:;
- (id)extra;
- (void).cxx_destruct;
+ (id)noticeGroupArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
