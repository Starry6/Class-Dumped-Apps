@interface CloudKit.AssetStreamHandle : NSObject
@property (nonatomic) q size;
- (long long)size;
- (id)init;
- (void).cxx_destruct;
- (id)initFrom:error:;
- (id)serializedDataAndReturnError:;
- (id)makeAVPlayerItemWith:;
+ (BOOL)useNetworkingDelegate;
+ (void)setUseNetworkingDelegate:;
+ (void)makeAssetStreamHandleFrom:with:for:completionHandler:;
+ (id)networkRequestOptions;
@end
