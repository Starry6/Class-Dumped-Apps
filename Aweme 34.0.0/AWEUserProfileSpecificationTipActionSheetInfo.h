@interface AWEUserProfileSpecificationTipActionSheetInfo : MTLModel
@property (nonatomic) NSString maskShowTrackingString;
@property (nonatomic) NSString actionSheetTitle;
@property (nonatomic) NSArray actionSheetItems;
@property (nonatomic) NSDictionary maskShowTrackingDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionSheetItems;
- (id)actionSheetTitle;
- (id)maskShowTrackingDict;
- (void)setMaskShowTrackingString:;
- (void)setActionSheetTitle:;
- (void)setActionSheetItems:;
- (void)setMaskShowTrackingDict:;
- (id)maskShowTrackingString;
- (void).cxx_destruct;
+ (id)actionSheetItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
