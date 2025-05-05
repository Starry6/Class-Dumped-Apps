@interface HTSLiveDecorationFontConfig : IESLivePBBaseMessage
@property (nonatomic) q fontId;
@property (nonatomic) NSString downloadURL;
@property (nonatomic) q status;
@property (nonatomic) NSString fontName;
+ (id)descriptor;
@end
