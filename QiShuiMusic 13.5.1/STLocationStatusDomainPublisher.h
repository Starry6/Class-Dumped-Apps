@interface STLocationStatusDomainPublisher : STUserInteractionHandlingStatusDomainPublisher
- (void)updateData:completion:;
- (void)updateVolatileData:completion:;
- (void)setData:withContext:completion:;
- (void)setVolatileData:withContext:completion:;
+ (id)emptyData;
+ (unsigned long long)statusDomainName;
+ (id)emptyChangeContext;
@end
