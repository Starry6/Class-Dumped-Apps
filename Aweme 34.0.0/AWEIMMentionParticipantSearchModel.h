@interface AWEIMMentionParticipantSearchModel : NSObject
@property (nonatomic) Q modelType;
@property (nonatomic) AWEIMUserViewModel userViewModel;
@property (nonatomic) BOOL botEnable;
@property (nonatomic) NSString title;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString sortName;
@property (nonatomic) NSString sortFirstLetter;
- (id)userViewModel;
- (BOOL)botEnable;
- (void)setSortFirstLetter:;
- (id)sortFirstLetter;
- (void)setUserViewModel:;
- (void)setBotEnable:;
- (unsigned long long)modelType;
- (void)setModelType:;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)sortName;
- (void)setSortName:;
+ (id)modelWithAiCloneViewModel:botEnable:;
+ (id)modelWithBotUserViewModel:;
+ (id)inviteBotsModel;
+ (id)modelWithUserViewModel:;
+ (id)atAllModel;
@end
