@interface IESECFeedResourceCardLynxModel : IESECFeedResourceCardBaseNode
@property (nonatomic) q style;
@property (nonatomic) NSString url;
@property (nonatomic) NSString lynxData;
@property (nonatomic) NSData lynxTemplate;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) NSDictionary trackerData;
- (void)setTrackerData:;
- (id)lynxData;
- (id)lynxTemplate;
- (void)setLynxData:;
- (void)setLynxTemplate:;
- (id)trackerData;
- (id)url;
- (void)setStyle:;
- (void)setWidth:;
- (void)setUrl:;
- (long long)height;
- (long long)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (long long)style;
+ (id)JSONKeyPathsByPropertyKey;
@end
