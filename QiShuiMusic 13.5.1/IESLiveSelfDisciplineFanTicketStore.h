@interface IESLiveSelfDisciplineFanTicketStore : IESLiveBaseFanTicketStore
@property (nonatomic) <IESLiveSelfDisciplineRouter> disciplineRouter;
@property (nonatomic) NSArray guestList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateFanticket;
- (void)bizStoreDidUpdatedGuestList:;
- (void)bizStoreMount;
- (id)disciplineRouter;
- (id)guestList;
- (void)selfDisciplineDidFinish;
- (void)selfDisciplineDidStart:;
- (void)setDisciplineRouter:;
- (void)setGuestList:;
- (void).cxx_destruct;
@end
