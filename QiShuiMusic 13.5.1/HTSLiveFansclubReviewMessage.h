@interface HTSLiveFansclubReviewMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger action;
@property (nonatomic) NSString content;
+ (id)descriptor;
@end
