@interface AWELongVideoAdPlayerContext : NSObject
@property (nonatomic) q displayIndex;
@property (nonatomic) NSArray displayEngineModels;
@property (nonatomic) NSError playerDisplayError;
@property (nonatomic) double playTime;
- (void)setPlayTime:;
- (id)playerDisplayError;
- (id)currentDisplayAdInfoModel;
- (void)setDisplayEngineModels:;
- (void)setPlayerDisplayError:;
- (id)displayEngineModels;
- (id)currentDisplayAdEngineModel;
- (double)playTime;
- (void)clear;
- (void).cxx_destruct;
- (long long)displayIndex;
- (void)setDisplayIndex:;
@end
