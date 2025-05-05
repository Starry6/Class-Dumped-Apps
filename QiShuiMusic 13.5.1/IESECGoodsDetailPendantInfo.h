@interface IESECGoodsDetailPendantInfo : MTLModel
@property (nonatomic) IESECGoodsDetailPendantFrame pendantFrame;
@property (nonatomic) IESECGoodsDetailPendantTiming showTiming;
@property (nonatomic) NSString schema;
@property (nonatomic) NSDictionary data;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pendantFrame;
- (void)setPendantFrame:;
- (void)setShowTiming:;
- (id)showTiming;
- (id)schema;
- (id)data;
- (void)setType:;
- (void)setSchema:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (void)setData:;
+ (id)JSONKeyPathsByPropertyKey;
@end
