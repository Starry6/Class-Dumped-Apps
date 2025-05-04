@interface AWEUserFavouritePOIMapIconModel : MTLModel
@property (nonatomic) AWEURLModel selectedIcon;
@property (nonatomic) AWEURLModel unselectedIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)selectedIcon;
- (void)setSelectedIcon:;
- (id)unselectedIcon;
- (void)setUnselectedIcon:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
