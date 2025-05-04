@interface AWEIMPublicGroupManagerPageEditViewModel : NSObject
@property (nonatomic) BOOL edit;
@property (nonatomic) BOOL editChangedByInteraction;
@property (nonatomic) q exportGroupCount;
@property (nonatomic) q editVersion;
- (void)changeEditToByInteraction:;
- (BOOL)editChangedByInteraction;
- (long long)editVersion;
- (void)makeEditVersionPlusOne;
- (void)exitEditModeWithReason:;
- (void)setExportGroupCount:;
- (long long)exportGroupCount;
- (id)init;
- (BOOL)isEditing;
- (void)setEdit:;
@end
