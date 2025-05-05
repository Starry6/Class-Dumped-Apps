@interface HTSLiveView : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray bannersArray;
@property (nonatomic) Q bannersArray_Count;
@property (nonatomic) NSMutableArray feedbacksArray;
@property (nonatomic) Q feedbacksArray_Count;
@property (nonatomic) q expireTime;
+ (id)descriptor;
@end
