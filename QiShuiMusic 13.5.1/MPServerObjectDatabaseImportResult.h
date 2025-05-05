@interface MPServerObjectDatabaseImportResult : NSObject
@property (nonatomic) @ annotatedPayload;
@property (nonatomic) NSError error;
@property (nonatomic) <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> trustProvider;
@property (nonatomic) NSArray playableAssetIdentifiers;
- (id)annotatedPayload;
- (id)error;
- (void).cxx_destruct;
- (id)initWithAnnotatedPayload:playableAssetIdentifiers:trustProvider:error:;
- (id)trustProvider;
- (id)playableAssetIdentifiers;
- (id)copyWithZone:;
@end
