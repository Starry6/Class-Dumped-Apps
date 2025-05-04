@interface AWEIMBaseNoticeDisturbModelNew : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) q type;
@property (nonatomic) q disturb;
- (void)setDisturb:;
- (long long)disturb;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
