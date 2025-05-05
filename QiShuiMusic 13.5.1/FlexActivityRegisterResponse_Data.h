@interface FlexActivityRegisterResponse_Data : IESLivePBBaseMessage
@property (nonatomic) FlexActivity flexActivity;
@property (nonatomic) BOOL hasFlexActivity;
+ (id)descriptor;
@end
