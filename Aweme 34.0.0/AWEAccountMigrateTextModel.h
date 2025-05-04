@interface AWEAccountMigrateTextModel : IESIMBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString link;
@property (nonatomic) q key;
@property (nonatomic) q action;
@property (nonatomic) {_NSRange=QQ} textRange;
- (void)setKey:;
- (void)setText:;
- (long long)key;
- (id)text;
- (id)textRange;
- (void)setAction:;
- (long long)action;
- (void).cxx_destruct;
- (id)link;
- (void)setLink:;
- (void)setTextRange:;
+ (id)JSONKeyPathsByPropertyKey;
@end
