@interface AWESearchPaidTagComponentModel : AWESearchComponentBasicModel
@property (nonatomic) NSString paidText;
@property (nonatomic) NSString descText;
@property (nonatomic) BOOL hidePaidText;
@property (nonatomic) BOOL hideDescText;
@property (nonatomic) BOOL forceUseDescText;
@property (nonatomic) double preViewStartTime;
@property (nonatomic) double preViewEndTime;
- (id)descText;
- (void)setDescText:;
- (void)setPaidText:;
- (void)setHideDescText:;
- (void)setForceUseDescText:;
- (void)setPreViewStartTime:;
- (void)setPreViewEndTime:;
- (id)paidText;
- (BOOL)hidePaidText;
- (BOOL)hideDescText;
- (double)preViewStartTime;
- (double)preViewEndTime;
- (BOOL)forceUseDescText;
- (void)setHidePaidText:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
