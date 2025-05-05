@interface IESECLiveGoodsRitTagTrackModel : MTLModel
@property (nonatomic) NSString tagCode;
@property (nonatomic) NSString tagText;
@property (nonatomic) NSString productTag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tagCode;
- (id)tagText;
- (id)trackParamsWithTagShowPosition:;
- (id)productTag;
- (void)setProductTag:;
- (void)setTagCode:;
- (void)setTagText:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
