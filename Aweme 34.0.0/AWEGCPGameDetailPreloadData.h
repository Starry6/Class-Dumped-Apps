@interface AWEGCPGameDetailPreloadData : NSObject
@property (nonatomic) NSString gameID;
@property (nonatomic) NSString prefixCacheKey;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEAwemeModel awemeModel;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)gameID;
- (void)setGameID:;
- (void)registerPitayaNotification;
- (void)startPreloadIfNeed:;
- (id)getRequestModel;
- (id)prefixCacheKey;
- (void)startPreload:;
- (BOOL)targetedCrowdEnablePreload;
- (void)setPrefixCacheKey:;
- (id)dataPreloadConfig;
- (id)initWithGameID:awemeModel:prefixCacheKey:enterFrom:;
- (void)dealloc;
- (void)handleNotification:;
- (void).cxx_destruct;
@end
