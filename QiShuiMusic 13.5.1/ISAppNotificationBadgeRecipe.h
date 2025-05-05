@interface ISAppNotificationBadgeRecipe : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)layerTreeForSize:scale:;
- (id)hintedBadgeRect;
- (id)hintedMaskRect;
@end
