@interface IESLiveDownloadFileResultModel : IESLiveBridgeModel
@property (nonatomic) NSNumber clientCode;
@property (nonatomic) NSNumber httpCode;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSDictionary response;
@property (nonatomic) NSString filePath;
@end
