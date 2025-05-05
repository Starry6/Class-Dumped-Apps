@interface CreateInfoResponse_DisableInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL disableEditTitle;
@property (nonatomic) BOOL disableEditCover;
@property (nonatomic) NSString disableEditTitleToast;
@property (nonatomic) NSString disableEditCoverToast;
+ (id)descriptor;
@end
