@interface AWEUserPrivateTab : MTLModel
@property (nonatomic) BOOL showPrivateTab;
@property (nonatomic) q privateTabStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)showPrivateTab;
- (void)setShowPrivateTab:;
- (long long)privateTabStyle;
- (void)setPrivateTabStyle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
