@interface CJPayHostModel : JSONModel
@property (nonatomic) NSString bdHostDomain;
@property (nonatomic) NSArray h5PathList;
@property (nonatomic) NSString integratedHostDomain;
- (id)bdHostDomain;
- (id)h5PathList;
- (id)integratedHostDomain;
- (void)setBdHostDomain:;
- (void)setH5PathList:;
- (void)setIntegratedHostDomain:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
