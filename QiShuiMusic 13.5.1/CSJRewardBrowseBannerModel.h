@interface CSJRewardBrowseBannerModel : NSObject
@property (nonatomic) NSString ugen_md5;
@property (nonatomic) NSString ugen_url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)prefetchDSLWithSlotId:;
- (void)setUgen_md5:;
- (void)setUgen_url:;
- (id)ugen_md5;
- (id)ugen_url;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (id)fromDictionary:;
@end
