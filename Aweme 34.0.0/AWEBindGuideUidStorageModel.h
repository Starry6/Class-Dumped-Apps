@interface AWEBindGuideUidStorageModel : AWEBaseApiModel
@property (nonatomic) NSDate lastShowDate;
@property (nonatomic) NSDate lastRedDotDismissDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lastShowDate;
- (void)setLastShowDate:;
- (id)lastRedDotDismissDate;
- (void)setLastRedDotDismissDate:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
