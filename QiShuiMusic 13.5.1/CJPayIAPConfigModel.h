@interface CJPayIAPConfigModel : JSONModel
@property (nonatomic) BOOL useNewIAP;
@property (nonatomic) BOOL enableSK2;
@property (nonatomic) BOOL enableSK1Observer;
@property (nonatomic) BOOL isNeedPendingReturnFail;
@property (nonatomic) NSArray loadingDescription;
@property (nonatomic) NSArray loadingDescriptionTime;
- (BOOL)enableSK1Observer;
- (BOOL)enableSK2;
- (BOOL)isNeedPendingReturnFail;
- (id)loadingDescription;
- (id)loadingDescriptionTime;
- (void)setEnableSK1Observer:;
- (void)setEnableSK2:;
- (void)setIsNeedPendingReturnFail:;
- (void)setLoadingDescription:;
- (void)setLoadingDescriptionTime:;
- (void)setUseNewIAP:;
- (BOOL)useNewIAP;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
