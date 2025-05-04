@interface AWECodeGenLifePoiFeedButtonBarModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) AWECodeGenLifePoiFeedButtonModel buttonModel;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setButtonModel:;
- (id)buttonModel;
+ (id)JSONKeyPathsByPropertyKey;
@end
