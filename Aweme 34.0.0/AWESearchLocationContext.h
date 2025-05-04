@interface AWESearchLocationContext : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSArray locationInfos;
@property (nonatomic) BOOL splitDomains;
@property (nonatomic) BOOL isOversea;
@property (nonatomic) AWEPOIShowPoiPickerMoreParamsModel moreParams;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) @? selectLocationBlock;
- (BOOL)splitDomains;
- (void)setSplitDomains:;
- (BOOL)isOversea;
- (void)setIsOversea:;
- (void)setSelectLocationBlock:;
- (id)initWithType:locationInfos:splitDomains:isOversea:moreParams:cancelBlock:selectLocationBlock:;
- (void)setLocationInfos:;
- (id)locationInfos;
- (id)selectLocationBlock;
- (void)setMoreParams:;
- (id)moreParams;
- (void)setCancelBlock:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)cancelBlock;
@end
