@interface IESLiveBaseKTVSEIParser : NSObject
@property (nonatomic) NSString currentUserId;
@property (nonatomic) BOOL isCPUOptimize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)seiType;
- (unsigned long long)supportSEIModes;
- (BOOL)checkTypeConditionWithMetaSEI:;
- (id)currentUserId;
- (id)customizeIndexKeyWithMetaSEI:;
- (void)didSetAttachingDIContext;
- (BOOL)isCPUOptimize;
- (id)parserMetaSEI:;
- (id)seiRootKey;
- (void)setCurrentUserId:;
- (void)setIsCPUOptimize:;
- (void).cxx_destruct;
@end
