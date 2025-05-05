@interface WebItemProviderRegistrationInfoList : NSObject
@property (nonatomic) {CGSize=dd} preferredPresentationSize;
@property (nonatomic) NSString suggestedName;
@property (nonatomic) NSItemProvider itemProvider;
@property (nonatomic) q preferredPresentationStyle;
@property (nonatomic) NSData teamData;
- (unsigned long long)numberOfItems;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)itemAtIndex:;
- (id)itemProvider;
- (id).cxx_construct;
- (id)suggestedName;
- (void)setSuggestedName:;
- (long long)preferredPresentationStyle;
- (void)setPreferredPresentationStyle:;
- (void)setTeamData:;
- (id)teamData;
- (id)preferredPresentationSize;
- (void)setPreferredPresentationSize:;
- (void)addData:forType:;
- (void)addRepresentingObject:;
- (void)addPromisedType:fileCallback:;
- (void)enumerateItems:;
@end
