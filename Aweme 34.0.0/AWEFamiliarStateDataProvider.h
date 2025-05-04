@interface AWEFamiliarStateDataProvider : AWESocialRelationDataProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)interceptor_readFromFile:completion:;
- (id)interceptor_readFromMemory:;
- (void)didFinishBlockUser:status:;
- (id)readFromMemory:;
- (void)readFromFile:completion:;
- (long long)familiarConfidence:scene:;
- (long long)familiarConfidenceForUserID:scene:;
- (long long)socialRealRelationType:scene:;
- (long long)socialRealRelationTypeForUserID:scene:;
- (void)updateWithProfileUser:;
- (id)p_responseFromModels:request:;
- (id)init;
- (void)dealloc;
- (id)identifier;
@end
