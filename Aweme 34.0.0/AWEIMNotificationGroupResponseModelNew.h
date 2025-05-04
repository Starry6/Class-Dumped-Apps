@interface AWEIMNotificationGroupResponseModelNew : IESIMBaseApiModel
@property (nonatomic) NSMutableArray noticeGroupArray;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) BOOL shouldGuideDismiss;
- (void)setExtra:;
- (id)noticeGroupArray;
- (void)setNoticeGroupArray:;
- (BOOL)shouldGuideDismiss;
- (void)setShouldGuideDismiss:;
- (id)extra;
- (void).cxx_destruct;
+ (id)noticeGroupArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
