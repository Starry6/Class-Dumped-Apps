@interface AMSMarketingItemParser : NSObject
+ (id)selectionFromMarketingItems:;
+ (id)selectionFromRawMarketingItems:;
+ (id)selectionFromRawMarketingItems:serviceType:placement:;
+ (id)_rawMarketingItemSelectionFromRawMarketingItems:serviceType:placement:engagementService:;
@end
