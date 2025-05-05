@interface CNPropertyInstantMessageEditingCell : CNPropertySimpleEditingCell
@property (nonatomic) CNInstantMessageAddress imAddress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)picker:didPickItem:;
- (void)pickerDidCancel:;
- (void)labelButtonClicked:;
- (id)imAddress;
@end
