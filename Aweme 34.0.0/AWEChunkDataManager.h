@interface AWEChunkDataManager : NSObject
@property (nonatomic) NSMapTable fingerprintAndModelTable;
- (id)getModel:;
- (id)substitudeForBriefModel:;
- (id)fingerprintAndModelTable;
- (void)setFingerprintAndModelTable:;
- (long long)filterBriefAwemeList:enterIndex:;
- (void)setModel:;
- (id)init;
- (void).cxx_destruct;
- (void)cleanData;
+ (id)shareInstance;
@end
