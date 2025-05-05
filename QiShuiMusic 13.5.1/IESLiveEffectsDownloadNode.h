@interface IESLiveEffectsDownloadNode : NSObject
@property (nonatomic) HTSLiveGiftSyncModel syncModel;
@property (nonatomic) @? syncModelDownloadCallback;
@property (nonatomic) q fetchMomentType;
@property (nonatomic) Q downloadPriority;
- (long long)fetchMomentType;
- (id)initWithSyncModel:fetchMomentType:downloadPriority:syncModelDownloadCallback:;
- (void)setFetchMomentType:;
- (void)setSyncModel:;
- (void)setSyncModelDownloadCallback:;
- (id)syncModel;
- (id)syncModelDownloadCallback;
- (unsigned long long)downloadPriority;
- (void).cxx_destruct;
- (void)setDownloadPriority:;
@end
