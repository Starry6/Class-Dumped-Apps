@interface IESLiveSaaSEnterRoomActionInjection : NSObject
@property (nonatomic) NSMutableDictionary actionSlices;
- (id)actionSlices;
- (void)setActionSlices:;
- (id)init;
- (void).cxx_destruct;
+ (id)publicActionDic;
+ (id)sliceBlockArrforEnterRoomStage:;
+ (BOOL)enableEnterFinishPage;
+ (BOOL)isViolationOfSaftyWithRoomAisle:;
+ (void)registActionforStageDidEnter;
+ (void)registActionforStageNewEnter;
+ (void)registActionforStageWillEnter;
+ (void)registActionforStageWillShowVC;
@end
