@interface IESLiveWhiteCategoryCert_SubCertInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger certStatus;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage smallIcon;
@property (nonatomic) BOOL hasSmallIcon;
@property (nonatomic) NSString smallIconDesc;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString schema;
+ (id)descriptor;
@end
