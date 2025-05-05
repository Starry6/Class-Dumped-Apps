@interface CJPayJHInformationConfig : JSONModel
@property (nonatomic) NSString jhMerchantId;
@property (nonatomic) NSString jhAppId;
@property (nonatomic) NSString source;
@property (nonatomic) NSString teaSourceNtv;
@property (nonatomic) NSString teaSourceLynx;
- (id)jhAppId;
- (id)jhMerchantId;
- (void)setJhAppId:;
- (void)setJhMerchantId:;
- (void)setTeaSourceLynx:;
- (void)setTeaSourceNtv:;
- (id)teaSourceLynx;
- (id)teaSourceNtv;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
