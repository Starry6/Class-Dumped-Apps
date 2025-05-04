@interface AWEPOIAMapBicycleDirectionModel : MTLModel
@property (nonatomic) AWEPOIAMapDirectionRoute data;
@property (nonatomic) NSNumber errcode;
@property (nonatomic) NSString errdetail;
@property (nonatomic) NSString errmsg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errcode;
- (void)setErrcode:;
- (id)errmsg;
- (void)setErrmsg:;
- (id)errdetail;
- (void)setErrdetail:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (BOOL)automaticallyDefaultMapping;
@end
