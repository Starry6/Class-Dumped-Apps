@interface IESLiveSaaSPBGradeBuffInfo : GPBMessage
@property (nonatomic) q buffLevel;
@property (nonatomic) NSInteger status;
@property (nonatomic) q endTime;
@property (nonatomic) GPBInt64Int64Dictionary statsInfo;
@property (nonatomic) Q statsInfo_Count;
@property (nonatomic) IESLiveSaaSPBImage buffBadge;
@property (nonatomic) BOOL hasBuffBadge;
+ (id)descriptor;
@end
