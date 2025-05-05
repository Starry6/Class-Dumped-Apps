@interface PHImportAssetThumbnailDataRequest : PHImportAssetDataRequest
@property (nonatomic) @? completionHandler;
@property (nonatomic) Q longestSide;
@property (nonatomic) C priority;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (id)description;
- (id)completionHandler;
- (unsigned char)priority;
- (id)requestAsset;
- (id)initWithAsset:longestSide:priority:;
- (unsigned long long)longestSide;
@end
