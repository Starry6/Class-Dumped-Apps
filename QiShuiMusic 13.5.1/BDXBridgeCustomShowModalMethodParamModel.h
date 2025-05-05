@interface BDXBridgeCustomShowModalMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL showCancel;
@property (nonatomic) NSString cancelText;
@property (nonatomic) NSString confirmText;
@property (nonatomic) BOOL tapMaskToDismiss;
@property (nonatomic) q mode;
- (id)cancelText;
- (void)setCancelText:;
- (void)setShowCancel:;
- (void)setTapMaskToDismiss:;
- (BOOL)showCancel;
- (BOOL)tapMaskToDismiss;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (long long)mode;
- (void)setMode:;
- (id)confirmText;
- (void)setConfirmText:;
+ (id)modeJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
@end
