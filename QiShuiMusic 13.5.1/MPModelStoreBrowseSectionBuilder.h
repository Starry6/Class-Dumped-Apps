@interface MPModelStoreBrowseSectionBuilder : NSObject
@property (nonatomic) MPPropertySet requestedPropertySet;
@property (nonatomic) MPPropertySet requestedPropertySetExcludingInternalOnlyProperties;
- (void).cxx_destruct;
- (id)initWithRequestedPropertySet:;
- (id)requestedPropertySetExcludingInternalOnlyProperties;
- (id)modelObjectWithTitle:loadAdditionalContentURL:uniformContentItemType:isMemberOfChartSet:isBrick:previouslyRetrievedNestedResponse:;
- (id)modelObjectWithTitle:loadAdditionalContentURL:uniformContentItemType:isMemberOfChartSet:isBrick:displaysAsGridCellInCarPlay:previouslyRetrievedNestedResponse:onlyContainsEditorialElements:featuredContentKind:;
- (id)modelObjectWithTitle:loadAdditionalContentURL:uniformContentItemType:isMemberOfChartSet:isBrick:displaysAsGridCellInCarPlay:previouslyRetrievedNestedResponse:onlyContainsEditorialElements:featuredContentKind:modelObject:;
- (id)requestedPropertySet;
+ (id)allSupportedPropertiesIncludingInternalOnlyProperties:;
+ (id)allSupportedInternalOnlyProperties;
@end
