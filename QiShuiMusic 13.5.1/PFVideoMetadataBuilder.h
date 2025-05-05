@interface PFVideoMetadataBuilder : PFMetadataBuilder
@property (nonatomic) NSArray metadataItems;
- (id)metadataItems;
- (id)commonItemForKey:string:;
- (id)titleItem;
- (id)captionItem;
- (id)accessibilityDescriptionItem;
- (id)locationItem;
- (id)creationDateItem;
- (id)videoDateFormatter;
- (id)keywordsItem;
@end
