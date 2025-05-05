@interface CJPayTradeQueryContentList : JSONModel
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString subContent;
- (void)setSubContent:;
- (id)subContent;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
