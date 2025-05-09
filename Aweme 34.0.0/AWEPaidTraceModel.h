@interface AWEPaidTraceModel : NSObject
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString parentContentID;
@property (nonatomic) NSString skuID;
@property (nonatomic) NSString spuID;
@property (nonatomic) NSString businessScene;
@property (nonatomic) NSString paymentType;
@property (nonatomic) NSString subEnterMethod;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSDictionary category;
@property (nonatomic) NSDictionary metric;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString previousPage;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setEnterFrom:;
- (void)setExtra:;
- (id)enterFrom;
- (void)setBusinessScene:;
- (id)spuID;
- (id)skuID;
- (void)setSkuID:;
- (void)setSpuID:;
- (id)businessScene;
- (void)setSubEnterMethod:;
- (id)subEnterMethod;
- (id)indexDictionary;
- (id)paymentType;
- (id)itemID;
- (void)setItemID:;
- (id)category;
- (void)setPaymentType:;
- (id)extra;
- (void)setup;
- (void)setupWithDictionary:;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)metric;
- (void)setMetric:;
- (id)toDictionary;
- (id)initWithDictionary:;
- (id)previousPage;
- (void)setPreviousPage:;
- (id)parentContentID;
- (void)setParentContentID:;
+ (id)indexKeys;
@end
