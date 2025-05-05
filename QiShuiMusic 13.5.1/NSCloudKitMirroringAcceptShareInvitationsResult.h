@interface NSCloudKitMirroringAcceptShareInvitationsResult : NSCloudKitMirroringResult
@property (nonatomic) NSArray acceptedShares;
@property (nonatomic) NSArray acceptedShareMetadatas;
- (id)initWithRequest:storeIdentifier:acceptedShares:acceptedShareMetadatas:error:;
- (void)dealloc;
- (id)acceptedShareMetadatas;
- (void)setAcceptedShares:;
- (id)acceptedShares;
- (void)setAcceptedShareMetadatas:;
@end
