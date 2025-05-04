@interface AWERepoGameModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q gameType;
@property (nonatomic) q game2DScore;
@property (nonatomic) BOOL publishBackToGame;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)acc_publishRequestParams:;
- (id)initWithDraft:;
- (void)saveWithDraft:;
- (void)setGame2DScore:;
- (long long)game2DScore;
- (BOOL)publishBackToGame;
- (void)setPublishBackToGame:;
- (id)copyWithZone:;
- (unsigned long long)gameType;
- (void)setGameType:;
@end
