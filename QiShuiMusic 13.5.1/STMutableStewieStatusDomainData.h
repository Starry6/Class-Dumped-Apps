@interface STMutableStewieStatusDomainData : STStewieStatusDomainData
@property (nonatomic) BOOL stewieActive;
@property (nonatomic) BOOL stewieConnected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)applyDiff:;
- (void)setStewieActive:;
- (id)copyWithZone:;
- (void)setStewieConnected:;
@end
