@interface STMutablePlaygroundsStatusDomainData : STPlaygroundsStatusDomainData
@property (nonatomic) BOOL playgroundsActive;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)applyDiff:;
- (id)copyWithZone:;
- (void)setPlaygroundsActive:;
@end
