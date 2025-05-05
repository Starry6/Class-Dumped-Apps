@interface PageInfo : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString text;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) HTSLiveImage titleImg;
@property (nonatomic) BOOL hasTitleImg;
+ (id)descriptor;
@end
