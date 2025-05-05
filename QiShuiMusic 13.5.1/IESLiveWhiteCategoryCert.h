@interface IESLiveWhiteCategoryCert : IESLivePBBaseMessage
@property (nonatomic) IESLiveWhiteCategoryCert_CertIcon certIcon;
@property (nonatomic) BOOL hasCertIcon;
@property (nonatomic) IESLiveWhiteCategoryCert_SubCertInfo subCertInfo;
@property (nonatomic) BOOL hasSubCertInfo;
+ (id)descriptor;
@end
