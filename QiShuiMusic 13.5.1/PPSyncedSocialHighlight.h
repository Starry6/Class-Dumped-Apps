@interface PPSyncedSocialHighlight : NSObject
@property (nonatomic) PPSocialHighlight highlight;
@property (nonatomic) NSDate rankingDate;
@property (nonatomic) NSString originatingDeviceId;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)highlight;
- (id)initWithHighlight:rankingDate:originatingDeviceId:;
- (id)rankingDate;
- (id)originatingDeviceId;
+ (BOOL)supportsSecureCoding;
@end
