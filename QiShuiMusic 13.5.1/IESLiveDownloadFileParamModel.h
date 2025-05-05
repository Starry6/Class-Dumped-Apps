@interface IESLiveDownloadFileParamModel : IESLiveBridgeModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString extension;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSDictionary params;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) NSString saveToAlbum;
- (id)init;
@end
