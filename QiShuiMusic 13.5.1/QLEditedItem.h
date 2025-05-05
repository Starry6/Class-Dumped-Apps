@interface QLEditedItem : NSObject
@property (nonatomic) <QLPreviewItem> item;
@property (nonatomic) NSURL editedFileURL;
- (id)item;
- (void)setItem:;
- (void).cxx_destruct;
- (id)editedFileURL;
- (id)initWithItem:editedFileURL:;
- (void)setEditedFileURL:;
@end
