@interface AWERelationUserListBaseSectionController : AWEBaseListSectionController
@property (nonatomic) NSString pageIdentifier;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL isSearch;
@property (nonatomic) q type;
@property (nonatomic) Q activeUserSourceType;
- (void)configCell:index:model:;
- (id)enterFrom;
- (id)aAWERelationDOUYINHTSAdapter;
- (void)startIMMonitor;
- (void)removeFan:;
- (void)updateActiveUserState:;
- (unsigned long long)activeUserSourceType;
- (void)pauseActiveMonitor:;
- (void)resumeActiveMonitor:;
- (void)createEditAliasView:model:;
- (void)dealloc;
- (long long)type;
- (BOOL)isMine;
- (BOOL)isSearch;
- (id)pageIdentifier;
+ (Class)aAWERelationDOUYINHTSAdapterClass;
@end
