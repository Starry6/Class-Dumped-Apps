@interface HTSLiveSpliceLabel : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) HTSLiveImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) HTSLiveImage iconImage;
@property (nonatomic) BOOL hasIconImage;
@property (nonatomic) NSString backgroundColor;
+ (id)descriptor;
@end
