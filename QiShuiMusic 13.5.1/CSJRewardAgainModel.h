@interface CSJRewardAgainModel : NSObject
@property (nonatomic) q againType;
@property (nonatomic) NSString preSessions;
@property (nonatomic) NSString playAgainRit;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString entrancePrefix;
@property (nonatomic) NSString entranceSuffix;
@property (nonatomic) NSArray againDialogConfig;
- (void)setPreSessions:;
- (id)againDialogConfig;
- (long long)againType;
- (id)entrancePrefix;
- (id)entranceSuffix;
- (id)playAgainRit;
- (id)preSessions;
- (void)setAgainDialogConfig:;
- (void)setAgainType:;
- (void)setEntrancePrefix:;
- (void)setEntranceSuffix:;
- (void)setPlayAgainRit:;
- (void)setupDataWithDictionary:;
- (BOOL)valid;
- (id)initWithDictionary:error:;
- (id)buttonText;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setButtonText:;
@end
