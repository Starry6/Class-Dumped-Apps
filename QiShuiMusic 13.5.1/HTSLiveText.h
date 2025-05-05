@interface HTSLiveText : IESLivePBBaseMessage
@property (nonatomic) NSString key;
@property (nonatomic) NSString defaultPattern;
@property (nonatomic) HTSLiveTextFormat defaultFormat;
@property (nonatomic) BOOL hasDefaultFormat;
@property (nonatomic) NSMutableArray piecesArray;
@property (nonatomic) Q piecesArray_Count;
@property (nonatomic) NSMutableDictionary schemaInfos;
@property (nonatomic) Q schemaInfos_Count;
- (void)ieslive_loadAllImageForImagePiecesWithDownloader:;
- (void)ieslive_loadAllImageForImagePiecesWithDownloader:completion:;
+ (id)descriptor;
@end
