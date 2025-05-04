@interface AWEFeedPadListViewChannelBadgeInfoModel : MTLModel
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSString badgeText;
@property (nonatomic) q version;
@property (nonatomic) q badgeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidWithError:;
- (long long)endTime;
- (long long)version;
- (void).cxx_destruct;
- (long long)startTime;
- (long long)badgeType;
- (id)badgeText;
+ (id)JSONKeyPathsByPropertyKey;
@end
