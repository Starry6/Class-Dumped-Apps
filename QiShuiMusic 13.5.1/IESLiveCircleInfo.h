@interface IESLiveCircleInfo : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage coverImg;
@property (nonatomic) BOOL hasCoverImg;
@property (nonatomic) NSString description_p;
+ (id)descriptor;
@end
