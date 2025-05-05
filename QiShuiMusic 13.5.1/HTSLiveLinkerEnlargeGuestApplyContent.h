@interface HTSLiveLinkerEnlargeGuestApplyContent : IESLivePBBaseMessage
@property (nonatomic) NSString fromOpenid;
@property (nonatomic) NSString applyPrompts;
@property (nonatomic) HTSLiveImage uiImage;
@property (nonatomic) BOOL hasUiImage;
@property (nonatomic) NSInteger targetEnlargeGuestType;
+ (id)descriptor;
@end
