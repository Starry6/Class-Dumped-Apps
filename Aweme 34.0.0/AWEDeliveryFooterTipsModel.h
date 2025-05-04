@interface AWEDeliveryFooterTipsModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSAttributedString content;
@property (nonatomic) NSString logoUrl;
@property (nonatomic) NSString logoDesc;
- (id)logoDesc;
- (void)setLogoDesc:;
- (id)content;
- (unsigned long long)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
- (id)logoUrl;
- (void)setLogoUrl:;
+ (id)buttonTypeWithCardType:;
+ (void)registerButtonType:cardType:;
@end
