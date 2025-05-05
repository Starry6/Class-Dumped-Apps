@interface IESLiveSaaSPBPrecisionMatch : GPBMessage
@property (nonatomic) NSString sponsorOpenId;
@property (nonatomic) NSString sponsorUnionId;
@property (nonatomic) NSMutableArray matchersArray;
@property (nonatomic) Q matchersArray_Count;
@property (nonatomic) NSString matchReason;
@property (nonatomic) q waitSeconds;
@property (nonatomic) q precisionMatchId;
+ (id)descriptor;
@end
