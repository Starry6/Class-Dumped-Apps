@interface IESLiveUserChorusInfo : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) q order;
@property (nonatomic) BOOL needPushRtc;
@property (nonatomic) BOOL needApproach;
@property (nonatomic) double singleSegmentMidiScore;
@property (nonatomic) double averageMidiScore;
+ (id)descriptor;
@end
