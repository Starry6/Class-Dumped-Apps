@interface IESThirdPartyStickerDownloadService : NSObject
@property (nonatomic) NSMapTable taskMapTable;
- (void)downloadThirdPartyModel:downloadQueuePriority:downloadQualityOfService:progress:completion:;
- (void)setTaskMapTable:;
- (id)taskMapTable;
- (id)init;
- (void).cxx_destruct;
@end
