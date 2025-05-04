@interface AWEPOIDetailMallFilterModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) q optionType;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) NSString optionValue;
@property (nonatomic) NSArray childOptions;
@property (nonatomic) @? didClick;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)didClick;
- (void)setOptionType:;
- (void)setDidClick:;
- (id)childOptions;
- (void)setOptionValue:;
- (void)setChildOptions:;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)optionType;
- (id)optionValue;
+ (id)childOptionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
