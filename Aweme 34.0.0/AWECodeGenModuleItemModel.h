@interface AWECodeGenModuleItemModel : AWEBaseDataModel
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString itemTitle;
@property (nonatomic) NSString itemIcon;
- (id)itemIcon;
- (void)setItemIcon:;
- (void).cxx_destruct;
- (id)itemTitle;
- (void)setItemTitle:;
- (id)itemId;
- (void)setItemId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
