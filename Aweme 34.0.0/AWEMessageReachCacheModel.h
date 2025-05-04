@interface AWEMessageReachCacheModel : MTLModel
@property (nonatomic) double expire;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)expire;
- (void)setExpire:;
+ (id)JSONKeyPathsByPropertyKey;
@end
