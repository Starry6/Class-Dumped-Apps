@interface AWELastViewInteractiveButtonModel : AWEBaseApiModel
@property (nonatomic) q buttonType;
@property (nonatomic) NSString message;
@property (nonatomic) q level;
@property (nonatomic) q cursor;
- (long long)buttonType;
- (void)setLevel:;
- (long long)cursor;
- (id)message;
- (long long)level;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setButtonType:;
- (void)setMessage:;
+ (id)JSONKeyPathsByPropertyKey;
@end
