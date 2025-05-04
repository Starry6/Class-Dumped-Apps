@interface AWEFantaVVFeatureModel : NSObject
@property (nonatomic) NSString uniqueID;
@property (nonatomic) double createTime;
- (id)init;
- (double)createTime;
- (id)uniqueID;
- (void)encodeWithCoder:;
- (void)setUniqueID:;
- (void)setCreateTime:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)copyWithZone:;
@end
