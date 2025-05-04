@interface AWEECMallSFActivityResultModel : MTLModel
@property (nonatomic) IESECURLModel icon;
@property (nonatomic) NSString link;
@property (nonatomic) NSString bgURL;
@property (nonatomic) NSString resourceID;
@property (nonatomic) NSString name;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bgURL;
- (void)setBgURL:;
- (id)resourceID;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (id)icon;
- (void)setResourceID:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (double)startTime;
- (id)link;
- (void)setLink:;
+ (id)JSONKeyPathsByPropertyKey;
@end
