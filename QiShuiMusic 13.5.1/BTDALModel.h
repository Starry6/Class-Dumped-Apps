@interface BTDALModel : NSObject
@property (nonatomic) NSString cid;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSString openUrl;
@property (nonatomic) BOOL isAd;
@property (nonatomic) NSArray enterpriseSchemes;
- (id)openUrl;
- (id)enterpriseSchemes;
- (id)logExtra;
- (void)setEnterpriseSchemes:;
- (void)setIsAd:;
- (void)setLogExtra:;
- (void)setOpenUrl:;
- (id)init;
- (id)initWithCoder:;
- (id)cid;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isAd;
- (void)setCid:;
@end
