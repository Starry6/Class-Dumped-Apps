@interface IESECListKitItemAdActionDataModel : MTLModel
@property (nonatomic) NSString tag;
@property (nonatomic) NSString label;
@property (nonatomic) NSString refer;
@property (nonatomic) NSDictionary adExtraData;
@property (nonatomic) BOOL reportThirdTrack;
@property (nonatomic) BOOL isClickEvent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAdExtraData:;
- (id)adExtraData;
- (BOOL)isClickEvent;
- (id)refer;
- (BOOL)reportThirdTrack;
- (void)setIsClickEvent:;
- (void)setRefer:;
- (void)setReportThirdTrack:;
- (id)tag;
- (void)setLabel:;
- (id)label;
- (void)setTag:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
