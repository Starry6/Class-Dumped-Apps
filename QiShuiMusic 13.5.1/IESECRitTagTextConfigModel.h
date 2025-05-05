@interface IESECRitTagTextConfigModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString textBGColor;
@property (nonatomic) NSString textBorderColor;
@property (nonatomic) Q weight;
@property (nonatomic) NSArray radius;
@property (nonatomic) NSArray padding;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTextBGColor:;
- (id)textBGColor;
- (void)setRadius:;
- (unsigned long long)weight;
- (void)setText:;
- (void)setWeight:;
- (id)radius;
- (void)setPadding:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (id)padding;
- (id)text;
- (void)setTextBorderColor:;
- (id)textBorderColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
