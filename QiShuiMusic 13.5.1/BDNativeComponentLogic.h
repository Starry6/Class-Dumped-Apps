@interface BDNativeComponentLogic : NSObject
@property (nonatomic) NSMutableDictionary nativeComponentDic;
@property (nonatomic) <BDNativeComponentLogicDelegate> delegate;
@property (nonatomic) NSMutableDictionary containerObjects;
- (id)checkNativeInfos;
- (void)clearNativeComponent;
- (void)clearNativeComponentWithIFrameID:;
- (id)containerObjects;
- (void)deleteNativeTag:;
- (id)deleteNativeTags:;
- (void)dispatchAction:callback:;
- (BOOL)insertNativeTag:;
- (id)insertNativeTags:;
- (id)nativeComponentDic;
- (void)registerNativeComponent:;
- (void)setContainerObjects:;
- (void)setNativeComponentDic:;
- (BOOL)updateNativeTag:;
- (id)updateNativeTags:;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)nativeComponentClassDic;
+ (void)registerGloablNativeComponent:;
@end
