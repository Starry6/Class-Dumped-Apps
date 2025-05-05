@interface StampSelectionCell : IESLivePBBaseMessage
@property (nonatomic) NSString id_p;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString schemaURL;
+ (id)descriptor;
@end
