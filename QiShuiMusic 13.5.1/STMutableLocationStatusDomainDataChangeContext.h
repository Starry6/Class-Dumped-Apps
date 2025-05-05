@interface STMutableLocationStatusDomainDataChangeContext : STLocationStatusDomainDataChangeContext
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) BOOL wantsProminentIndication;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUserInitiated:;
- (id)copyWithZone:;
- (void)setWantsProminentIndication:;
@end
