@interface ISiOSMacAppRecipe : NSObject
@property (nonatomic) Q options;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOptions:;
- (id)layerTreeForSize:scale:;
- (unsigned long long)options;
- (id)badgeRect;
- (id)hintedShadowBlur;
- (id)hintedShadowOffset;
@end
