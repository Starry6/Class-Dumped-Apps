@interface AWEECShareReflowDialogInfoModel : MTLModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString schema;
@property (nonatomic) BOOL unshow;
@property (nonatomic) NSNumber dialogWidth;
@property (nonatomic) NSNumber dialogHeight;
@property (nonatomic) AWEECShareQrConfig qrConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)unshow;
- (void)setUnshow:;
- (id)dialogWidth;
- (void)setDialogWidth:;
- (id)dialogHeight;
- (void)setDialogHeight:;
- (id)qrConfig;
- (void)setQrConfig:;
- (id)schema;
- (void)setSchema:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)url;
+ (id)qrConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
