@interface AWEPermissionActionModel : NSObject
@property (nonatomic) BOOL isBlocked;
@property (nonatomic) Q displayType;
@property (nonatomic) NSString toast;
@property (nonatomic) NSDictionary debugInfo;
@property (nonatomic) @? actionBlock;
- (BOOL)isBlocked;
- (id)debugInfo;
- (unsigned long long)displayType;
- (void)setDisplayType:;
- (void).cxx_destruct;
- (void)setDebugInfo:;
- (void)setIsBlocked:;
- (void)setActionBlock:;
- (id)actionBlock;
- (void)setToast:;
- (id)toast;
@end
