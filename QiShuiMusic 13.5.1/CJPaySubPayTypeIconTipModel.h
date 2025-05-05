@interface CJPaySubPayTypeIconTipModel : JSONModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray<CJPaySubPayTypeIconTipInfoModel> contentList;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)contentList;
- (void)setContentList:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
