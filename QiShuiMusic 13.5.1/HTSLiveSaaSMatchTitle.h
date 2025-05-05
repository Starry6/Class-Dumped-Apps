@interface HTSLiveSaaSMatchTitle : BDDynamicMTLModel
@property (nonatomic) NSString roomTitle;
@property (nonatomic) HTSLiveSaaSMatchTitle_TitleIcon titleIcon;
@property (nonatomic) BOOL hasTitleIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasTitleIcon;
- (void)setHasTitleIcon:;
+ (id)titleIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
