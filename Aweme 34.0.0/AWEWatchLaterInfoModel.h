@interface AWEWatchLaterInfoModel : AWEBaseApiModel
@property (nonatomic) q listNum;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString buttonText;
@property (nonatomic) q addTimestamp;
@property (nonatomic) NSString extra;
@property (nonatomic) BOOL isJustAdd;
@property (nonatomic) BOOL hasRecoverPlayProgress;
@property (nonatomic) BOOL isReportProgress;
- (void)setExtra:;
- (long long)listNum;
- (void)setListNum:;
- (long long)addTimestamp;
- (void)setAddTimestamp:;
- (BOOL)isJustAdd;
- (void)setIsJustAdd:;
- (BOOL)hasRecoverPlayProgress;
- (void)setHasRecoverPlayProgress:;
- (BOOL)isReportProgress;
- (void)setIsReportProgress:;
- (id)tag;
- (void)setTag:;
- (id)extra;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
