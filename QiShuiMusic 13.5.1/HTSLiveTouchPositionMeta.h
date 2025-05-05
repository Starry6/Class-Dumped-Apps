@interface HTSLiveTouchPositionMeta : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) q metaId;
@property (nonatomic) NSInteger position;
@property (nonatomic) q template_p;
@property (nonatomic) NSMutableArray freqCtrlParamsListArray;
@property (nonatomic) Q freqCtrlParamsListArray_Count;
@property (nonatomic) q duration;
@property (nonatomic) NSMutableArray refreshParamsListArray;
@property (nonatomic) Q refreshParamsListArray_Count;
@property (nonatomic) q priority;
+ (id)descriptor;
@end
