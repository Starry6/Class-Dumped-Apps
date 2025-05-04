@interface AWEProfileBrandTabModel : MTLModel
@property (nonatomic) BOOL show;
@property (nonatomic) NSString title;
@property (nonatomic) Q industryType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)industryType;
- (void)setIndustryType:;
- (BOOL)show;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setShow:;
+ (id)JSONKeyPathsByPropertyKey;
@end
