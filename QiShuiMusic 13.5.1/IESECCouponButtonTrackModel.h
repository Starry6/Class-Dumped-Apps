@interface IESECCouponButtonTrackModel : MTLModel
@property (nonatomic) NSString tagCode;
@property (nonatomic) NSString tagText;
@property (nonatomic) NSString productTag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tagCode;
- (id)tagText;
- (id)productTag;
- (void)setProductTag:;
- (void)setTagCode:;
- (void)setTagText:;
- (id)trackParamsWithTagShowScene:position:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
