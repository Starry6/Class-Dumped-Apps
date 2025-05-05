@interface HTSLiveFeatureValue : IESLivePBBaseMessage
@property (nonatomic) NSInteger valType;
@property (nonatomic) q int64Val;
@property (nonatomic) BOOL boolVal;
@property (nonatomic) double float64Val;
@property (nonatomic) NSString stringVal;
+ (id)descriptor;
@end
