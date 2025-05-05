@interface AWEIMBaseNoticeDisturbModelNew : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) q type;
@property (nonatomic) q disturb;
- (long long)disturb;
- (void)setDisturb:;
- (void)setName:;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
