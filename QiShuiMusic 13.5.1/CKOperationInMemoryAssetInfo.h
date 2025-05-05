@interface CKOperationInMemoryAssetInfo : NSObject
@property (nonatomic) NSMutableData assetContent;
@property (nonatomic) NSMutableIndexSet byteRanges;
- (id)init;
- (BOOL)isContiguous;
- (void).cxx_destruct;
- (id)assetContent;
- (void)setAssetContent:;
- (void)writeData:atOffset:;
- (id)assetContentWithError:expectedSignature:;
- (id)byteRanges;
- (void)setByteRanges:;
@end
