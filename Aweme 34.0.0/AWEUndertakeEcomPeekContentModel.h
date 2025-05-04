@interface AWEUndertakeEcomPeekContentModel : MTLModel
@property (nonatomic) NSString popupSchema;
@property (nonatomic) NSArray couponInfoList;
@property (nonatomic) NSString venueSchema;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)popupSchema;
- (void)setPopupSchema:;
- (id)venueSchema;
- (void)setVenueSchema:;
- (id)couponInfoList;
- (void)setCouponInfoList:;
- (id)extra;
- (void).cxx_destruct;
+ (id)couponInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
