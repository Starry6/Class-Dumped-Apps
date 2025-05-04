@interface AWEHomePageBubbleFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getBubbleWithBubbleModel:targetView:targetPoint:position:;
- (id)getBubbleContentSizeWithContentConfig:;
+ (id)sharedInstance;
@end
