@interface AWEAccountMigrateTextModel : IESIMBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString link;
@property (nonatomic) q key;
@property (nonatomic) q action;
@property (nonatomic) {_NSRange=QQ} textRange;
- (id)link;
- (void)setText:;
- (void)setLink:;
- (long long)key;
- (long long)action;
- (id)textRange;
- (void)setAction:;
- (void)setKey:;
- (void).cxx_destruct;
- (id)text;
- (void)setTextRange:;
+ (id)JSONKeyPathsByPropertyKey;
@end
