@interface RivalsRecommendResponse_PKSeasonData : IESLivePBBaseMessage
@property (nonatomic) BOOL hasGrade;
@property (nonatomic) q nowCount;
@property (nonatomic) q targetCount;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) HTSLiveImage gradeImg;
@property (nonatomic) BOOL hasGradeImg;
@property (nonatomic) q firstGrade;
@property (nonatomic) q secondGrade;
+ (id)descriptor;
@end
