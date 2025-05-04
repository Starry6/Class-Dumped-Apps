@interface AWECodeGenPopupModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
