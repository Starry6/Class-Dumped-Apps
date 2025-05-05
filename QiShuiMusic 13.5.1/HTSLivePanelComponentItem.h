@interface HTSLivePanelComponentItem : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger status;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString displayText;
@property (nonatomic) NSString schemaURL;
+ (id)descriptor;
@end
