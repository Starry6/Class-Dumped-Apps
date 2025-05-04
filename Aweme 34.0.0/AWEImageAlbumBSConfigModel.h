@interface AWEImageAlbumBSConfigModel : MTLModel
@property (nonatomic) NSString gearName;
@property (nonatomic) NSArray bsModelArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bsModelArray;
- (id)gearName;
- (void)setGearName:;
- (void)setBsModelArray:;
- (void).cxx_destruct;
+ (id)bsModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
