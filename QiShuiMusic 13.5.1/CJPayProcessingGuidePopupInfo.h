@interface CJPayProcessingGuidePopupInfo : JSONModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString btnText;
- (id)btnText;
- (void)setBtnText:;
- (id)desc;
- (void)setDesc:;
- (void)setTitle:;
- (id)title;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
