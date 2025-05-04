@interface AWEIMDownloadVideoActionSheetModel : NSObject
@property (nonatomic) NSString groupId;
@property (nonatomic) NSArray items;
- (void)addItemWithTitle:iconImage:handler:;
- (void)setGroupId:;
- (id)groupId;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)initWithGroupId:;
@end
