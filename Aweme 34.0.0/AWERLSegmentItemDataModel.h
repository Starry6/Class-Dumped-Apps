@interface AWERLSegmentItemDataModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString selectedTitle;
@property (nonatomic) NSString backupTitle;
@property (nonatomic) BOOL shouldShowRedDot;
@property (nonatomic) NSString redDotContentString;
- (void)setShouldShowRedDot:;
- (BOOL)shouldShowRedDot;
- (id)backupTitle;
- (void)setBackupTitle:;
- (id)redDotContentString;
- (void)setRedDotContentString:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)selectedTitle;
- (void)setSelectedTitle:;
@end
