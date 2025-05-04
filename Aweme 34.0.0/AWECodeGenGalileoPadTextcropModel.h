@interface AWECodeGenGalileoPadTextcropModel : AWEBaseDataModel
@property (nonatomic) NSArray ipadDHCutRatioArray;
@property (nonatomic) NSArray ipadDVCutRatioArray;
@property (nonatomic) NSArray androidDHCutRatioArray;
@property (nonatomic) NSArray androidDVCutRatioArray;
@property (nonatomic) q version;
- (id)ipadDHCutRatioArray;
- (id)ipadDVCutRatioArray;
- (id)androidDHCutRatioArray;
- (id)androidDVCutRatioArray;
- (void)setIpadDHCutRatioArray:;
- (void)setIpadDVCutRatioArray:;
- (void)setAndroidDHCutRatioArray:;
- (void)setAndroidDVCutRatioArray:;
- (long long)version;
- (void)setVersion:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
