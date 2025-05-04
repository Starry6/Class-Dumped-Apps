@interface AWERelationUserListBaseSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL isFriends;
@property (nonatomic) q type;
@property (nonatomic) NSString enterFrom;
- (void)setupViewModel;
- (id)enterFrom;
- (void)appendModels:;
- (void)replaceByModels:;
- (void)insertModel:atIndex:;
- (void)updateByModels:;
- (void)insertModel:atIndex:animated:;
- (void)appendModels:animated:;
- (void)replaceByModels:animated:;
- (void)updateByModels:animated:;
- (BOOL)isFriends;
- (id)convertUserModel:;
- (id)convertUserModelsArray:;
- (long long)type;
- (BOOL)isMine;
@end
