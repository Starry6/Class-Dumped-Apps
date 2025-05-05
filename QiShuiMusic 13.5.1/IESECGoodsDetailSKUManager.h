@interface IESECGoodsDetailSKUManager : NSObject
@property (nonatomic) NSArray skuSpecInfo;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSString pageIdentifier;
- (void)setSkuSpecInfo:;
- (id)getDefaultSpecNames;
- (id)getSelectedSpecIDs;
- (id)getSelectedSpecIndexs;
- (id)getSelectedSpecNames;
- (id)initWithPageIdentifier:;
- (id)skuSpecInfo;
- (void)updateSKUSelectedInfoWithIndexArray:;
- (void)updateSKUSelectedInfoWithSpecIDArray:;
- (void)updateSpecInfoWithCommonMeta:;
- (void)setCount:;
- (void).cxx_destruct;
- (id)count;
- (id)pageIdentifier;
- (void)setPageIdentifier:;
@end
