@interface DCActivityItemSource : NSObject
@property (nonatomic) ICDocCamDocumentInfoCollection docInfoCollection;
@property (nonatomic) NSString attachmentTypeUTI;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)activityViewControllerPlaceholderItem:;
- (id)activityViewController:itemForActivityType:;
- (id)activityViewController:dataTypeIdentifierForActivityType:;
- (id)activityViewController:attachmentNameForActivityType:;
- (id)attachmentTypeUTI;
- (id)docInfoCollection;
- (void)setDocInfoCollection:;
- (id)initWithDocumentInfoCollection:;
@end
