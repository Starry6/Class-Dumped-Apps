@interface AWEIMGroupLiveFansSubscriptionTag : MTLModel
@property (nonatomic) q tagType;
@property (nonatomic) NSString tagString;
@property (nonatomic) q priority;
@property (nonatomic) q expireTimeInMs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTagString:;
- (id)tagString;
- (long long)expireTimeInMs;
- (void)setExpireTimeInMs:;
- (long long)tagType;
- (long long)priority;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)setTagType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
