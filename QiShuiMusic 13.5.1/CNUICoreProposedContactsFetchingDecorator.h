@interface CNUICoreProposedContactsFetchingDecorator : NSObject
@property (nonatomic) <CNUICoreFamilyMemberContactsModelFetching> modelFetcher;
@property (nonatomic) <CNUICoreFamilyInfoFetching> familyInfoFetcher;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schedulerProvider;
- (void).cxx_destruct;
- (id)allContactsModel;
- (id)whitelistedContactsModel;
- (id)familyInfoFetcher;
- (id)modelFetcher;
- (id)initWithModelFetcher:familyInfoFetcher:schedulerProvider:;
- (id)initWithModelFetcher:familyMember:schedulerProvider:;
+ (id)modelWithProposedContactsFromFamilyInfo:;
+ (id)proposedContactsFromFamilyInfo:;
@end
