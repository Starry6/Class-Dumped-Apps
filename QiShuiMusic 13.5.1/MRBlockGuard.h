@interface MRBlockGuard : MSVBlockGuard
- (id)initWithTimeout:reason:handler:;
- (id)initWithTimeout:reason:queue:handler:;
@end
