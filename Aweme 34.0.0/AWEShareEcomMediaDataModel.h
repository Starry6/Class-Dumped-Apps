@interface AWEShareEcomMediaDataModel : MTLModel
@property (nonatomic) AWEShareEcomMediaModel ecomVideo;
@property (nonatomic) AWEShareEcomMediaModel ecomLive;
@property (nonatomic) NSString bcmShareId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bcmShareId;
- (void)setBcmShareId:;
- (id)ecomVideo;
- (void)setEcomVideo:;
- (id)ecomLive;
- (void)setEcomLive:;
- (void).cxx_destruct;
+ (id)ecomVideoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
