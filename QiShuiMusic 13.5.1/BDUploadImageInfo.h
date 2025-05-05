@interface BDUploadImageInfo : NSObject
@property (nonatomic) q fileIndex;
@property (nonatomic) NSString storeId;
@property (nonatomic) NSDictionary metainfoDict;
@property (nonatomic) NSDictionary encryInfo;
- (id)encryInfo;
- (id)metainfoDict;
- (void)setEncryInfo:;
- (void)setMetainfoDict:;
- (void).cxx_destruct;
- (id)storeId;
- (void)setStoreId:;
- (long long)fileIndex;
- (void)setFileIndex:;
@end
