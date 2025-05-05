@interface HTSLiveLinkmicThemedCompetitionBannerMessageForPC_BannerContent : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) HTSLiveUser currentPerformer;
@property (nonatomic) BOOL hasCurrentPerformer;
@property (nonatomic) q rank;
@property (nonatomic) q totalPerformerCount;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSMutableArray rotateContentArray;
@property (nonatomic) Q rotateContentArray_Count;
@property (nonatomic) q version;
+ (id)descriptor;
@end
