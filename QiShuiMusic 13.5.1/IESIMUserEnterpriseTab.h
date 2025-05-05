@interface IESIMUserEnterpriseTab : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) q type;
@property (nonatomic) NSString tabSchema;
@property (nonatomic) q show_tab_style;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShow_tab_style:;
- (void)setTabSchema:;
- (long long)show_tab_style;
- (id)tabSchema;
- (void)setType:;
- (void)setTitle:;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
