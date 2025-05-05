@interface IESECGoodsDetailAuthorLiveEntryModel : MTLModel
@property (nonatomic) BOOL living;
@property (nonatomic) NSString URL;
@property (nonatomic) NSString logExtraJSONString;
@property (nonatomic) IESECGoodsDetailSellingPointModel sellingPointInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)living;
- (id)logExtraJSONString;
- (id)sellingPointInfo;
- (void)setLiving:;
- (void)setLogExtraJSONString:;
- (void)setSellingPointInfo:;
- (BOOL)shouldShowLiveEntry;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
+ (id)JSONKeyPathsByPropertyKey;
@end
