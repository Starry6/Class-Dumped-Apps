@interface PanelTitle : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) HTSLiveImage iconBgImage;
@property (nonatomic) BOOL hasIconBgImage;
@property (nonatomic) NSString descTagText;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString iconSchemaURL;
+ (id)descriptor;
@end
