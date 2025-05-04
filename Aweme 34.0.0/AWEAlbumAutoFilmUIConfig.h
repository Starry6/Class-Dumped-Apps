@interface AWEAlbumAutoFilmUIConfig : NSObject
@property (nonatomic) NSDictionary configDict;
- (id)firstTipsContent;
- (id)secondaryTipsContentForNewUser;
- (id)secondaryTipsContentForRegular;
- (long long)step1ProgressPercentage;
- (long long)step2ProgressPercentage;
- (long long)step3ProgressPercentage;
- (double)step1ProgressUpdateInterval;
- (double)step2ProgressUpdateIntervale;
- (double)step3ProgressUpdateInterval;
- (id)configDict;
- (void)setConfigDict:;
- (void).cxx_destruct;
@end
