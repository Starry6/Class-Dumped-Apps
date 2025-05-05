@interface DOCHotFolderEvent : DOCFrecencyBasedEvent
@property (nonatomic) NSNumber rowId;
@property (nonatomic) NSString appBundleIdentifier;
@property (nonatomic) FPItem folderItem;
@property (nonatomic) Q type;
- (void)setAppBundleIdentifier:;
- (void)setType:;
- (id)appBundleIdentifier;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)rowId;
- (void)setRowId:;
- (id)folderItem;
- (void)setFolderItem:;
- (id)initWithAppBundleIdentifier:folderItem:type:lastUsedDate:frecency:;
- (id)initWithRowId:appBundleIdentifier:folderItem:type:lastUsedDate:frecency:;
@end
