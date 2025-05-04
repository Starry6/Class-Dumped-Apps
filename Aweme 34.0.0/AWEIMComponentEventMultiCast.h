@interface AWEIMComponentEventMultiCast : NSObject
@property (nonatomic) NSPointerArray targets;
@property (nonatomic) NSMutableDictionary signatures;
@property (nonatomic) NSMutableDictionary selectorResponderDic;
@property (nonatomic) BOOL useSelectorCache;
- (BOOL)containsComponent:;
- (BOOL)useSelectorCache;
- (id)selectorResponderDic;
- (void)p_prepareForSelector:;
- (id)p_targetListForSelector:;
- (id)p_signatureForSelector:;
- (void)empty;
- (id)targets;
- (void)setTargets:;
- (id)init;
- (id)forwardingTargetForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)addComponent:;
- (id)methodSignatureForSelector:;
- (id)signatures;
- (void)setSignatures:;
@end
