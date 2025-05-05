@interface MPModelStoreBrowseRoomRequest : MPStoreModelRequest
@property (nonatomic) NSURL loadAdditionalContentURL;
@property (nonatomic) NSString roomID;
@property (nonatomic) MPModelStoreBrowseResponse previousRetrievedNestedResponse;
@property (nonatomic) MPModelStoreBrowseResponse previousResponse;
- (id)newOperationWithResponseHandler:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)configureWithParentSection:;
- (id)loadAdditionalContentURL;
- (void)setLoadAdditionalContentURL:;
- (id)previousRetrievedNestedResponse;
- (void)setPreviousRetrievedNestedResponse:;
- (id)previousResponse;
- (void)setPreviousResponse:;
- (id)roomID;
- (void)setRoomID:;
+ (BOOL)supportsSecureCoding;
+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;
@end
