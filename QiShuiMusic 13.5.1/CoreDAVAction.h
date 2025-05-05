@interface CoreDAVAction : NSObject
@property (nonatomic) NSInteger action;
@property (nonatomic) @ context;
@property (nonatomic) @ changeContext;
@property (nonatomic) BOOL ignoresGuardianRestrictions;
- (id)context;
- (int)action;
- (void).cxx_destruct;
- (id)description;
- (BOOL)ignoresGuardianRestrictions;
- (void)setIgnoresGuardianRestrictions:;
- (id)initWithAction:context:;
- (id)changeContext;
- (void)setChangeContext:;
@end
