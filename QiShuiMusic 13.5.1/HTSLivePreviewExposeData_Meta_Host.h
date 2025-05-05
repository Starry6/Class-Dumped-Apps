@interface HTSLivePreviewExposeData_Meta_Host : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString tip;
@property (nonatomic) NSString color;
+ (id)descriptor;
@end
