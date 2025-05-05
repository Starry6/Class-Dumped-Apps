@interface StampInfoExtra : IESLivePBBaseMessage
@property (nonatomic) NSString customizedCoverUri;
@property (nonatomic) NSInteger reviewStatus;
@property (nonatomic) BOOL canModifyCover;
@property (nonatomic) BOOL fromReview;
@property (nonatomic) HTSLiveImage customizedCover;
@property (nonatomic) BOOL hasCustomizedCover;
@property (nonatomic) NSInteger canModifyCoverStatus;
@property (nonatomic) NSInteger fromReviewStatus;
+ (id)descriptor;
@end
