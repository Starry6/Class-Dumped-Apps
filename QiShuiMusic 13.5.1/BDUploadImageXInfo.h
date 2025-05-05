@interface BDUploadImageXInfo : NSObject
@property (nonatomic) q fileIndex;
@property (nonatomic) NSString storeId;
@property (nonatomic) NSDictionary metainfoDict;
@property (nonatomic) NSString encryInfo;
@property (nonatomic) NSMutableDictionary e2eEncInfoDict;
- (id)e2eEncInfoDict;
- (id)encryInfo;
- (id)metainfoDict;
- (void)setE2eEncInfoDict:;
- (void)setEncryInfo:;
- (void)setMetainfoDict:;
- (void).cxx_destruct;
- (id)storeId;
- (void)setStoreId:;
- (long long)fileIndex;
- (void)setFileIndex:;
@end
