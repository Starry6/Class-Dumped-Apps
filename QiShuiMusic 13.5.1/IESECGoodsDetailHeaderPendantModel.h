@interface IESECGoodsDetailHeaderPendantModel : IESECBaseApiModel
@property (nonatomic) NSString pendantID;
@property (nonatomic) IESECGoodsDetailHeaderSliceModel slice;
@property (nonatomic) IESECGoodsDetailHeaderLynxModel lynx;
@property (nonatomic) NSDictionary native;
@property (nonatomic) IESECGoodsDetailHeaderPendantConfigModel config;
- (id)lynx;
- (id)pendantID;
- (void)setLynx:;
- (void)setNative:;
- (void)setPendantID:;
- (void)setConfig:;
- (void)setSlice:;
- (id)slice;
- (id)native;
- (void).cxx_destruct;
- (id)config;
+ (id)JSONKeyPathsByPropertyKey;
@end
