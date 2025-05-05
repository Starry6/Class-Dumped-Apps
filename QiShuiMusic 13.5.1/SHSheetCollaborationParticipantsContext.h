@interface SHSheetCollaborationParticipantsContext : NSObject
@property (nonatomic) NSString headerTitle;
@property (nonatomic) NSString supplementaryText;
@property (nonatomic) NSString confirmButtonText;
@property (nonatomic) NSString loadingText;
- (id)headerTitle;
- (void).cxx_destruct;
- (id)loadingText;
- (id)initWithHeaderTitle:supplementaryText:confirmButtonText:loadingText:;
- (id)supplementaryText;
- (id)confirmButtonText;
+ (id)defaultContext;
@end
