@interface AWEECOMIMSubCardPriceTagModel : MTLModel
@property (nonatomic) NSAttributedString displayAttriString;
@property (nonatomic) NSString displayString;
@property (nonatomic) Q type;
@property (nonatomic) NSString fmtString;
@property (nonatomic) NSString valueString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fmtString;
- (id)displayAttriString;
- (void)setFmtString:;
- (void)setDisplayAttriString:;
- (void)setDisplayString:;
- (id)displayString;
- (unsigned long long)type;
- (void)setType:;
- (id)valueString;
- (void).cxx_destruct;
- (id)textColor;
- (void)setValueString:;
+ (id)JSONKeyPathsByPropertyKey;
@end
