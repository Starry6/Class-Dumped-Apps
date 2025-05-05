@interface GEOPlaceExternalAction : NSObject
@property (nonatomic) NSString actionName;
@property (nonatomic) NSString symbolName;
@property (nonatomic) NSArray actionProviders;
@property (nonatomic) NSOrderedSet appAdamIds;
@property (nonatomic) NSString winningAdamId;
@property (nonatomic) NSString categoryId;
- (id)symbolName;
- (id)actionProviders;
- (void).cxx_destruct;
- (id)actionName;
- (id)description;
- (id)initWithActionData:attributionMap:;
- (void)_setupActionProvidersWithAttributionMap:;
- (id)winningAdamId;
- (id)partnerActionForAdamId:;
- (id)appAdamIds;
- (id)categoryId;
@end
