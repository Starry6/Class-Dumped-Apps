@interface HTSLivePreviewExposeData_PreviewIMExtend : IESLivePBBaseMessage
@property (nonatomic) q imExtendType;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
