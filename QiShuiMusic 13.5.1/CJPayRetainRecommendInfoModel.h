@interface CJPayRetainRecommendInfoModel : JSONModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString topRetainButtonText;
@property (nonatomic) NSString bottomRetainButtonText;
- (id)bottomRetainButtonText;
- (void)setBottomRetainButtonText:;
- (void)setTopRetainButtonText:;
- (id)topRetainButtonText;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
