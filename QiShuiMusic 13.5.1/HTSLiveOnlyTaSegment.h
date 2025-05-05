@interface HTSLiveOnlyTaSegment : IESLivePBBaseMessage
@property (nonatomic) q startOffset;
@property (nonatomic) q stopOffset;
+ (id)descriptor;
@end
