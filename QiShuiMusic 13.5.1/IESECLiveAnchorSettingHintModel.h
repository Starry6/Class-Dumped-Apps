@interface IESECLiveAnchorSettingHintModel : IESECLiveApiBaseModel
@property (nonatomic) NSString hintTitle;
@property (nonatomic) NSString subHintTitle;
@property (nonatomic) NSString subHintName;
@property (nonatomic) NSString guideBubbleText;
@property (nonatomic) BOOL hasShowSubHint;
- (id)guideBubbleText;
- (void)setSubHintName:;
- (BOOL)hasShowSubHint;
- (void)setGuideBubbleText:;
- (void)setHasShowSubHint:;
- (void)setHintTitle:;
- (void)setSubHintTitle:;
- (id)subHintName;
- (id)subHintTitle;
- (id)hintTitle;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
