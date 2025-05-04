@interface AWEPOITextTagRateInfoModel : MTLModel
@property (nonatomic) AWEPOILynxModel lynxData;
@property (nonatomic) AWEPOICommonEntryModel entry;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxData;
- (void)setLynxData:;
- (void)setHeight:;
- (void)setWidth:;
- (void)setEntry:;
- (long long)width;
- (void).cxx_destruct;
- (id)entry;
- (long long)height;
+ (id)JSONKeyPathsByPropertyKey;
@end
