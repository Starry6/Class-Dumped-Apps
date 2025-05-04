@interface AWEUserSwitchOnPersonalDetailContext : NSObject
@property (nonatomic) @? finishComplete;
@property (nonatomic) @? switchComplete;
@property (nonatomic) NSString fromUid;
@property (nonatomic) BOOL switchSuccess;
- (id)fromUid;
- (void)setFromUid:;
- (id)finishComplete;
- (void)setFinishComplete:;
- (id)switchComplete;
- (void)setSwitchComplete:;
- (BOOL)switchSuccess;
- (void)setSwitchSuccess:;
- (void).cxx_destruct;
@end
