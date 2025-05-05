@interface IESLiveGiftPendingMessageStruct : NSObject
@property (nonatomic) NSNumber resourceID;
@property (nonatomic) GPBMessage message;
@property (nonatomic) NSMutableArray neededAssetArray;
@property (nonatomic) q retryCount;
- (id)neededAssetArray;
- (void)setNeededAssetArray:;
- (void)setResourceID:;
- (id)resourceID;
- (void)setMessage:;
- (void)setRetryCount:;
- (long long)retryCount;
- (id)message;
- (void).cxx_destruct;
@end
