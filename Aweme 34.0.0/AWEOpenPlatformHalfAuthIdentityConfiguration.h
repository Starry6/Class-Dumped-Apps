@interface AWEOpenPlatformHalfAuthIdentityConfiguration : NSObject
@property (nonatomic) AWEOpenPlatformAuthFlowManager flowManager;
@property (nonatomic) NSArray scopeItems;
@property (nonatomic) Q scopeType;
- (id)scopeItems;
- (void)setScopeItems:;
- (void).cxx_destruct;
- (unsigned long long)scopeType;
- (void)setFlowManager:;
- (id)flowManager;
- (void)setScopeType:;
@end
