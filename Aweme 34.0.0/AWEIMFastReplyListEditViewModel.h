@interface AWEIMFastReplyListEditViewModel : NSObject
@property (nonatomic) NSArray dataSourceArray;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isEdited;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)setDataSourceArray:;
- (id)dataSourceArray;
- (id)initWithReplyTextArray:;
- (void)eventTrack4ShowAction;
- (id)itemModelWithIndex:;
- (void)addEditListItem;
- (void)removeEditListItem:;
- (id)replyTextArrayByJsonString;
- (void)saveEditListItems:;
- (void)eventTrack4SaveAction;
- (id)replyTextArray;
- (void).cxx_destruct;
- (BOOL)isEdited;
@end
