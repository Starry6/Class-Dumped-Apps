@interface HTSLiveClientComponentFunctionInfo : IESLivePBBaseMessage
@property (nonatomic) NSString functionId;
@property (nonatomic) NSMutableDictionary data_p;
@property (nonatomic) Q data_p_Count;
+ (id)descriptor;
@end
