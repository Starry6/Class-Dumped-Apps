@interface AWEFeedInteractionLabelElementsManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)uiConfigModelForFeedStandardLabel;
+ (BOOL)filterForRelationDynamicLabel:;
+ (BOOL)reverseTokenForFeedLabelShowWithReferString:andBusinessID:model:;
+ (BOOL)shouldOfflineLabelWithBusinessID:labelType:context:;
+ (BOOL)shouldOfflineLabelWithBusinessID:context:;
+ (BOOL)reverseEnable;
+ (BOOL)recommendReverseUnable;
+ (BOOL)reverseFromRecommend:businessID:;
+ (id)feedRelationLabelManagerUIStandardBlackList;
+ (id)getBalckListFromSettings;
+ (BOOL)feedStandardLabelUIABSettings;
+ (id)feedLabelManagerPageList;
+ (id)stringBlackListConfig;
+ (id)feedTagReverseIDDict;
+ (id)downgradeBlaclListConfig;
+ (id)relationLabelTypeBlackList;
+ (id)feedInteractionLabelReverseABSettings;
+ (id)defaultReverseBlackList;
+ (id)defaultDowngradeReverseBlackList;
+ (BOOL)shouldTagOfflineWithABKey:context:;
+ (BOOL)useNewStandardForTagWithReferString:;
+ (BOOL)reverseTokenForFeedLabelShowWithReferString:andBusinessID:relationType:model:;
@end
