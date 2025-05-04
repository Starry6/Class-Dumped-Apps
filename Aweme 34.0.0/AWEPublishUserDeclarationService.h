@interface AWEPublishUserDeclarationService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enabledInAdavancedSettings;
- (void)fetchDataWithCreationId:completion:;
- (id)aAWEStudioPostPageEntryAdapter;
- (BOOL)enabled;
+ (Class)aAWEStudioPostPageEntryAdapterClass;
@end
