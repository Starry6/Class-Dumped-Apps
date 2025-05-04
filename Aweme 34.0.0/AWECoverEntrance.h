@interface AWECoverEntrance : NSObject
@property (nonatomic) <ACCPublishMergeImageHelperProtocol> mergeHelper;
@property (nonatomic) BOOL loading;
@property (nonatomic) double clickTime;
@property (nonatomic) q createVideoDataType;
@property (nonatomic) q generateSourceDuration;
@property (nonatomic) q generateModelDuration;
- (void)setClickTime:;
- (double)clickTime;
- (id)mergeHelper;
- (void)releaseMergeHelper;
- (void)setMergeHelper:;
- (long long)createVideoDataType;
- (void)setCreateVideoDataType:;
- (long long)generateSourceDuration;
- (void)setGenerateSourceDuration:;
- (long long)generateModelDuration;
- (void)setGenerateModelDuration:;
- (void).cxx_destruct;
- (BOOL)loading;
- (void)setLoading:;
+ (id)shared;
@end
