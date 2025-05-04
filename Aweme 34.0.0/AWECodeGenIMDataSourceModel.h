@interface AWECodeGenIMDataSourceModel : AWEBaseDataModel
@property (nonatomic) NSInteger convType;
@property (nonatomic) NSString convId;
@property (nonatomic) q convShortId;
@property (nonatomic) q messageId;
- (id)convId;
- (long long)convShortId;
- (int)convType;
- (void)setConvId:;
- (void)setConvType:;
- (void)setConvShortId:;
- (long long)messageId;
- (void).cxx_destruct;
- (void)setMessageId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
