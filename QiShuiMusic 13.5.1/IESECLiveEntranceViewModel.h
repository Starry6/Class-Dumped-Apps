@interface IESECLiveEntranceViewModel : MTLModel
@property (nonatomic) IESECLiveImageURLModel leftIcon;
@property (nonatomic) IESECLiveImageURLModel rightIcon;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString title;
@property (nonatomic) NSString trackName;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTrackParams:;
- (void)setLeftIcon:;
- (void)setRightIcon:;
- (id)trackParams;
- (id)schema;
- (void)setTitle:;
- (void)setSchema:;
- (id)title;
- (void).cxx_destruct;
- (id)leftIcon;
- (id)rightIcon;
- (id)trackName;
- (void)setTrackName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
