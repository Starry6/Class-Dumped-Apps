@interface AWENoticePreloadModel : IESIMBaseApiModel
@property (nonatomic) NSNumber postTime;
@property (nonatomic) NSNumber commentTime;
- (id)commentTime;
- (id)postTime;
- (void)setCommentTime:;
- (void)setPostTime:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
