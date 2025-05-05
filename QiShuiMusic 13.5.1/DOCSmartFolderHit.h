@interface DOCSmartFolderHit : DOCFrecencyBasedEvent
@property (nonatomic) NSNumber rowId;
@property (nonatomic) FPItem folderItem;
@property (nonatomic) Q type;
@property (nonatomic) NSString value;
- (void)setType:;
- (void)setValue:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)value;
- (id)rowId;
- (void)setRowId:;
- (id)initWithFolder:type:value:lastUsedDate:frecency:;
- (id)initWithRowId:folder:type:value:lastUsedDate:frecency:;
- (id)folderItem;
- (void)setFolderItem:;
@end
