@interface CJPayShowConfirmBioGuideInfo : JSONModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString confirmText;
@property (nonatomic) NSString cancelText;
@property (nonatomic) BOOL isClickedConfirmBtn;
@property (nonatomic) BOOL isConfrimedShow;
- (BOOL)isConfrimedShow;
- (id)cancelText;
- (BOOL)isClickedConfirmBtn;
- (void)setCancelText:;
- (void)setIsClickedConfirmBtn:;
- (void)setIsConfrimedShow:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)confirmText;
- (void)setConfirmText:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
