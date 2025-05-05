@interface HTSLiveTopicInfo : IESLivePBBaseMessage
@property (nonatomic) q challengeId;
@property (nonatomic) NSString challengeName;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) q playCount;
@property (nonatomic) HTSLiveImage cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) HTSLiveTimePoint seeTime;
@property (nonatomic) BOOL hasSeeTime;
@property (nonatomic) NSString challengeDesc;
@property (nonatomic) q subType;
@property (nonatomic) NSString highlightTime;
+ (id)descriptor;
@end
