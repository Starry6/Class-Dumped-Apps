@interface CJPayAssets : JSONModel
@property (nonatomic) NSString bgImage;
@property (nonatomic) NSString tipImage;
@property (nonatomic) NSString showImage;
- (void)setTipImage:;
- (id)tipImage;
- (void).cxx_destruct;
- (id)showImage;
- (void)setShowImage:;
- (void)setBgImage:;
- (id)bgImage;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
