@interface AWEServerHandlePicAfrModel : MTLModel
@property (nonatomic) NSString algorithm;
@property (nonatomic) double maskArea;
@property (nonatomic) NSString pic;
@property (nonatomic) double maskRatio;
@property (nonatomic) NSString picConf;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pic;
- (id)picConf;
- (double)maskArea;
- (void)setMaskArea:;
- (void)setPic:;
- (double)maskRatio;
- (void)setMaskRatio:;
- (void)setPicConf:;
- (id)algorithm;
- (void)setAlgorithm:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
