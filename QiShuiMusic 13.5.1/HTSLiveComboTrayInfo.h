@interface HTSLiveComboTrayInfo : IESLivePBBaseMessage
@property (nonatomic) NSString comboId;
@property (nonatomic) HTSLiveImage trayBaseImg;
@property (nonatomic) BOOL hasTrayBaseImg;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSInteger action;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
