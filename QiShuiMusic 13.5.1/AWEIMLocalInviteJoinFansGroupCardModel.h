@interface AWEIMLocalInviteJoinFansGroupCardModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) q groupCount;
- (void)setGroupCount:;
- (void)setSubtitle:;
- (void)setTitle:;
- (long long)groupCount;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
+ (id)JSONKeyPathsByPropertyKey;
@end
