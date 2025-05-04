@interface AWEDeliveryTextComponentModel : NSObject
@property (nonatomic) UIFont textFont;
@property (nonatomic) NSString originText;
@property (nonatomic) UIColor textColor;
@property (nonatomic) NSAttributedString attributeText;
@property (nonatomic) BOOL isLinkRisk;
@property (nonatomic) BOOL isSendByMe;
@property (nonatomic) NSString pigeonBizType;
- (id)originText;
- (id)attributeText;
- (void)setAttributeText:;
- (void)setPigeonBizType:;
- (id)pigeonBizType;
- (BOOL)isSendByMe;
- (void)setIsSendByMe:;
- (BOOL)isLinkRisk;
- (void)setTextAndTextSizeWithText:font:textColor:;
- (id)initWithOriginalText:font:textColor:pigeonBizType:;
- (void)bindTextColor:;
- (void)setOriginText:;
- (void)setIsLinkRisk:;
- (id)textFont;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setTextFont:;
@end
