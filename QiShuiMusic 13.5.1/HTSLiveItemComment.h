@interface HTSLiveItemComment : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage itemCommentIconDark;
@property (nonatomic) BOOL hasItemCommentIconDark;
@property (nonatomic) HTSLiveImage itemCommentIconLight;
@property (nonatomic) BOOL hasItemCommentIconLight;
+ (id)descriptor;
@end
