@interface AWEHomePageRemoteItemModel : MTLModel
@property (nonatomic) NSString moduleType;
@property (nonatomic) NSString businessType;
@property (nonatomic) NSString businessId;
@property (nonatomic) NSDictionary data;
@property (nonatomic) double cellHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBusinessType:;
- (id)businessType;
- (id)businessId;
- (id)description;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)moduleType;
- (void)setBusinessId:;
- (double)cellHeight;
- (void)setCellHeight:;
- (void)setModuleType:;
- (BOOL)isModelValid;
+ (id)JSONKeyPathsByPropertyKey;
@end
