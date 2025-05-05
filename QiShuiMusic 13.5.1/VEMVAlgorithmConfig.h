@interface VEMVAlgorithmConfig : NSObject
@property (nonatomic) NSString photoPath;
@property (nonatomic) NSString algorithmName;
@property (nonatomic) BOOL needServerExcute;
@property (nonatomic) NSString algorithmParamJson;
@property (nonatomic) Q algorithmResultType;
- (id)algorithmParamJson;
- (unsigned long long)algorithmResultType;
- (BOOL)needServerExcute;
- (void)setAlgorithmParamJson:;
- (void)setAlgorithmResultType:;
- (void)setNeedServerExcute:;
- (void).cxx_destruct;
- (id)photoPath;
- (void)setPhotoPath:;
- (id)algorithmName;
- (void)setAlgorithmName:;
@end
