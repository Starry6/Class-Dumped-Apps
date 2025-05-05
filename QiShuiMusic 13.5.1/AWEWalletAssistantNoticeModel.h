@interface AWEWalletAssistantNoticeModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) double contentW;
@property (nonatomic) double contentH;
- (double)contentH;
- (double)contentW;
- (void)setContentH:;
- (void)setContentW:;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
