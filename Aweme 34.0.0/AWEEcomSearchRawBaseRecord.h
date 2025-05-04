@interface AWEEcomSearchRawBaseRecord : AWESearchEcommerceRecord
@property (nonatomic) NSDictionary params;
- (id)pitayaItemData;
- (id)toDictionaryValue;
- (id)itemInfo;
- (void).cxx_destruct;
- (id)params;
- (id)searchID;
- (void)setParams:;
+ (id)rawRecord:model:;
@end
