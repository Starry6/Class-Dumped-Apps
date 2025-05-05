@interface IESECSliceXElementViewStorage : NSObject
@property (nonatomic) NSMutableDictionary storageMap;
- (id)getValueWithUniqueID:elementID:;
- (void)setValue:withUniqueID:elementID:;
- (id)storageMap;
- (void)setStorageMap:;
- (void).cxx_destruct;
@end
