@interface AWEPOIParamsVerifyManager : NSObject
@property (nonatomic) NSMutableArray itemCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadConfig;
- (void)paramsDataManagerStatusDidChange:;
- (id)dataManagerWithType:;
- (void)trackErrorWithEvent:params:error:alertErrorMessage:owner:type:;
- (long long)exceptionTypeWithType:errorCode:;
- (void)verifyEvent:params:type:;
- (void)setItemCache:;
- (void)setupManager;
- (void).cxx_destruct;
- (id)itemCache;
+ (BOOL)isParamsVerifyOpen;
@end
