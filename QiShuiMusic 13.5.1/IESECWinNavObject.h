@interface IESECWinNavObject : NSObject
@property (nonatomic) IESECWinHeaderBFFModel BFFModel;
@property (nonatomic) NSString passThroughAPI;
@property (nonatomic) NSString userID;
@property (nonatomic) BOOL hasLiving;
@property (nonatomic) IESECTracker tracker;
- (id)BFFModel;
- (BOOL)hasLiving;
- (id)passThroughAPI;
- (void)setBFFModel:;
- (void)setHasLiving:;
- (void)setPassThroughAPI:;
- (void)setTracker:;
- (id)userID;
- (id)tracker;
- (void).cxx_destruct;
- (void)setUserID:;
@end
