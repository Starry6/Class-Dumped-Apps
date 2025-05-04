@interface AWEIMSecurityTextMessage : AWEIMTextMessage
@property (nonatomic) q originType;
- (id)initWithContentDict:;
- (id)supportMessageMenuTypeList;
- (id)initWithContentDict:andOriginalType:;
- (id)displayText;
- (id)contentAttributes;
- (long long)originType;
- (void)setOriginType:;
@end
