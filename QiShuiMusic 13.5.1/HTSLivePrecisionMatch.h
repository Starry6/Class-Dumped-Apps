@interface HTSLivePrecisionMatch : IESLivePBBaseMessage
@property (nonatomic) NSString mixSponsorId;
@property (nonatomic) NSString sponsorOpenId;
@property (nonatomic) NSString sponsorUnionId;
@property (nonatomic) NSMutableArray matchersArray;
@property (nonatomic) Q matchersArray_Count;
@property (nonatomic) NSString matchReason;
@property (nonatomic) q waitSeconds;
@property (nonatomic) q precisionMatchId;
@property (nonatomic) NSString activityName;
@property (nonatomic) NSString recommendReason;
@property (nonatomic) NSInteger source;
@property (nonatomic) NSString notDisturbText;
@property (nonatomic) q flexActivityId;
@property (nonatomic) q duration;
@property (nonatomic) NSString battleAttachedInfo;
@property (nonatomic) NSString signExtra;
- (id)mixSponsorId;
+ (id)descriptor;
@end
