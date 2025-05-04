@interface AWEPOIAnchorBubbleDisplayTime : MTLModel
@property (nonatomic) q startSeconds;
@property (nonatomic) q totalSeconds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStartSeconds:;
- (long long)totalSeconds;
- (void)setTotalSeconds:;
- (long long)startSeconds;
+ (id)JSONKeyPathsByPropertyKey;
@end
