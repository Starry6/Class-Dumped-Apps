@interface IESECSliceXFetchResourceResult : NSObject
@property (nonatomic) IESECSliceXTemplatePackage templatePackage;
@property (nonatomic) IESECSliceXResourceLoadInfo loadInfo;
@property (nonatomic) NSError error;
- (id)templatePackage;
- (id)loadInfo;
- (void)setLoadInfo:;
- (void)setTemplatePackage:;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
@end
