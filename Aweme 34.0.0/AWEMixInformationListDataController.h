@interface AWEMixInformationListDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
- (id)secUserID;
- (void)setSecUserID:;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)initWithUserID:secUserID:;
- (id)urlForProfileMix;
- (void)trackWithError:logid:model:;
- (void)loadMoreWithCurrentMixID:completion:;
- (void)requestUserCreateMixCountWithCompletion:;
- (id)cursor;
- (void)appendData:;
- (id)userID;
- (void)removeAll;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)params;
- (id)copyWithZone:;
- (void)setUserID:;
@end
