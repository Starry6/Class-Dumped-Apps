@interface AWERepoPostSyncModel : NSObject
@property (nonatomic) BOOL isSyncToUlike;
@property (nonatomic) AWEUlikeAccountAuthModel ulikeAuthInfo;
@property (nonatomic) BOOL isUlikeBinded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isSyncToUlike;
- (void)setIsSyncToUlike:;
- (void)updateUlikeSync:manually:;
- (id)ulikeAuthInfo;
- (BOOL)isUlikeBinded;
- (id)draft_DTOModel;
- (void)draft_updateWithDTOModel:;
- (void)setUlikeAuthInfo:;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (Class)draft_DTOModelClass;
@end
