@interface AWERxReadonlyProperty : AWERxProperty
@property (nonatomic) q accessCode;
- (id)initWithValue:accessCode:;
- (void)setValue:accessCode:;
- (void)setValue:withContext:accessCode:;
- (void)bind:accessCode:;
- (void)bind:initValue:accessCode:;
- (long long)accessCode;
- (void)setAccessCode:;
@end
