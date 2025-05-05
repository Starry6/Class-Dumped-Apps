@interface STMutableStatusDomainDataChangeContext : STStatusDomainDataChangeContext
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUserInitiated:;
- (id)copyWithZone:;
@end
