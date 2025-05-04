@interface AWEPaySwiftImpl.CCMOpenSuccessPageServiceInfoModel : MTLModel
@property (nonatomic) NSString serviceDesc;
@property (nonatomic) NSString creditServiceName;
@property (nonatomic) NSString creditServiceURL;
- (id)serviceDesc;
- (void)setServiceDesc:;
- (id)creditServiceName;
- (void)setCreditServiceName:;
- (id)creditServiceURL;
- (void)setCreditServiceURL:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
