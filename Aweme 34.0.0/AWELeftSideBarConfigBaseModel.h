@interface AWELeftSideBarConfigBaseModel : MTLModel
@property (nonatomic) q version;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (long long)version;
- (void)setVersion:;
- (double)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
