@interface BDACSWebLoadingState : NSObject
@property (nonatomic) Q jumpNumber;
@property (nonatomic) BOOL loading;
- (unsigned long long)jumpNumber;
- (void)setJumpNumber:;
- (void)setLoading:;
- (BOOL)loading;
- (id)copyWithZone:;
@end
