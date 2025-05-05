@interface HTSLiveOpenContentData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveOpenActivityData openActivityData;
@property (nonatomic) BOOL hasOpenActivityData;
+ (id)descriptor;
@end
