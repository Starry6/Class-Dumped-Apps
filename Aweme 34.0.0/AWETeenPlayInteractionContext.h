@interface AWETeenPlayInteractionContext : AWEPageContext
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString albumEnterFrom;
@property (nonatomic) q vcType;
@property (nonatomic) AWETeenExtraParamModel extraParam;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterMethod;
- (id)referString;
- (void)setEnterMethod:;
- (void)setReferString:;
- (id)enterMethod;
- (long long)vcType;
- (void)setVcType:;
- (id)extraParam;
- (void)setExtraParam:;
- (id)albumEnterFrom;
- (void)setAlbumEnterFrom:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end
