@interface IMParentalControlsService : NSObject
@property (nonatomic) BOOL disableService;
@property (nonatomic) BOOL forceAllowlist;
@property (nonatomic) NSSet allowlist;
@property (nonatomic) NSString name;
- (void)setDisableService:;
- (void)dealloc;
- (void)setName:;
- (void)setForceAllowlist:;
- (void)setAllowlist:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)forceAllowlist;
- (BOOL)disableService;
- (id)allowlist;
@end
