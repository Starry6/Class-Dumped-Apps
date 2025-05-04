@interface AWEUserEnterpriseTab : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) q type;
@property (nonatomic) NSString tabSchema;
@property (nonatomic) q show_tab_style;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabSchema;
- (void)setTabSchema:;
- (long long)show_tab_style;
- (void)setShow_tab_style:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
