@interface HTSLiveDSAlertInfo : IESLivePBBaseMessage
@property (nonatomic) NSString icon;
@property (nonatomic) NSString slogan;
@property (nonatomic) NSString background;
@property (nonatomic) NSString title;
@property (nonatomic) NSString text;
@property (nonatomic) NSString leftButtonText;
@property (nonatomic) NSString rightButtonText;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSString limitScene;
@property (nonatomic) NSInteger errCode;
+ (id)descriptor;
@end
