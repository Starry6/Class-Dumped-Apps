@interface PCCGroupJob : PCCJob
- (id)result;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithID:forTarget:options:;
- (void)registerResult:error:;
- (void)prepareNext;
@end
