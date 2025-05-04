@interface AWECodeGenEpisodeHighlightModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) q startTimeMillis;
@property (nonatomic) q endTimeMillis;
@property (nonatomic) q highlightEpisodeId;
@property (nonatomic) q highlightItemId;
- (long long)highlightEpisodeId;
- (void)setHighlightEpisodeId:;
- (long long)highlightItemId;
- (void)setHighlightItemId:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)startTimeMillis;
- (long long)endTimeMillis;
- (void)setEndTimeMillis:;
- (void)setStartTimeMillis:;
+ (id)JSONKeyPathsByPropertyKey;
@end
