@interface HTSLiveCombinedText : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray displayItemsArray;
@property (nonatomic) Q displayItemsArray_Count;
@property (nonatomic) HTSLiveSchemaInfo schemaInfo;
@property (nonatomic) BOOL hasSchemaInfo;
@property (nonatomic) HTSLiveComboInfo comboInfo;
@property (nonatomic) BOOL hasComboInfo;
- (void)ieslive_loadAllImageForImageItemWithDownloader:andDownloadTextItemImagePieces:;
- (void)ieslive_loadAllImageForImageItemWithDownloader:andDownloadTextItemImagePieces:completion:;
+ (id)descriptor;
@end
