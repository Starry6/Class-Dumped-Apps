@interface TRINotificationProcessingPolicy : TRIPBMessage
@property (nonatomic) I delaySeconds;
@property (nonatomic) BOOL hasDelaySeconds;
@property (nonatomic) NSInteger assetDownloadPolicy;
@property (nonatomic) BOOL hasAssetDownloadPolicy;
+ (id)descriptor;
@end
