@interface CNPropertySocialProfileEditingCell : CNPropertySimpleEditingCell
@property (nonatomic) CNSocialProfile profile;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)profile;
- (void)picker:didPickItem:;
- (void)pickerDidCancel:;
- (void)labelButtonClicked:;
@end
