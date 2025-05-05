@interface IESLiveSaaSToolbarItemConfig : BDDynamicMTLModel
@property (nonatomic) q toolbarType;
@property (nonatomic) IESLiveSaaSImage icon;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) q displayType;
@property (nonatomic) IESLiveSaaSImage dynamicIcon;
@property (nonatomic) IESLiveSaaSImage iconVertical;
@property (nonatomic) IESLiveSaaSImage dynamicBottomIcon;
@property (nonatomic) IESLiveSaaSImage bottomIcon;
@property (nonatomic) NSArray toastListArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)bottomIconJSONTransformer;
+ (id)dynamicBottomIconJSONTransformer;
+ (id)dynamicIconJSONTransformer;
+ (id)iconJSONTransformer;
+ (id)iconVerticalJSONTransformer;
+ (id)toastListArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
