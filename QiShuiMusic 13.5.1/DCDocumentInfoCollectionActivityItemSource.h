@interface DCDocumentInfoCollectionActivityItemSource : DCActivityItemSource
- (id)activityViewControllerPlaceholderItem:;
- (id)activityViewController:itemForActivityType:;
- (id)activityViewController:dataTypeIdentifierForActivityType:;
- (id)activityViewController:attachmentNameForActivityType:;
@end
