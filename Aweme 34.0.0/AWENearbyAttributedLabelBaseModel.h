@interface AWENearbyAttributedLabelBaseModel : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginRight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setMarginRight:;
- (double)marginLeft;
- (double)marginRight;
- (void)setMarginLeft:;
+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:;
@end
