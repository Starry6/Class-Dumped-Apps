@interface IESLiveFaceGiftExternalMgr : NSObject
@property (nonatomic) NSMapTable externalMap;
@property (nonatomic) NSArray externalIDRegedit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_cancelInjectFaceGiftExternal:;
- (void)setExternalMap:;
- (BOOL)blockPositionExecuteWithPos:externals:;
- (BOOL)cancelInjectFaceGiftExternal:;
- (id)externalIDRegedit;
- (id)externalMap;
- (id)initWithDIContext:;
- (BOOL)injectFaceGiftExternal:;
- (BOOL)p_enableInjectWithExternal:;
- (void)p_injectFaceGiftExternal:;
- (BOOL)p_prefilterWithExternal:;
- (void)setExternalIDRegedit:;
- (void).cxx_destruct;
- (void)p_init;
@end
