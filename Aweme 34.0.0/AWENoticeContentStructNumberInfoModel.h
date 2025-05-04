@interface AWENoticeContentStructNumberInfoModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString note;
@property (nonatomic) NSString content;
- (id)content;
- (id)note;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setNote:;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
