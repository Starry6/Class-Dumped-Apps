@interface IESECLiveBottomBannerModel : MTLModel
@property (nonatomic) IESECLiveImageURLModel rightIcon;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString text;
@property (nonatomic) NSString trackName;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTrackParams:;
- (void)setRightIcon:;
- (id)trackParams;
- (id)schema;
- (void)setText:;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)text;
- (id)rightIcon;
- (id)trackName;
- (void)setTrackName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
