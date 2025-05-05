@interface IESLiveSaaSPreviewDegradeHelper : NSObject
+ (long long)streamPreviewDegradeWithPlayer:reuseToPlay:streamData:qualities:selectResolution:;
+ (long long)streamPreviewDegradeWithPlayer:streamData:qualities:selectResolution:;
+ (id)tryDecryptStreamData:;
@end
