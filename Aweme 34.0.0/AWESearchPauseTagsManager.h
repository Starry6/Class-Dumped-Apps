@interface AWESearchPauseTagsManager : NSObject
@property (nonatomic) <AWEHttpTask> task;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWESearchTagResponseModel responseModel;
@property (nonatomic) double playTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)fetchSearchPauseTagsWithAwemeModel:tagInfo:completion:;
- (void)setPlayTime:;
- (void)setTask:;
- (id)task;
- (double)playTime;
- (void).cxx_destruct;
- (id)responseModel;
- (void)setResponseModel:;
+ (id)sharedInstance;
@end
