@interface HTSLiveSharePosterInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveSharePosterInfo_PosterData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
