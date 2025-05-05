@interface LPSharingMetadataWrapper : NSObject
@property (nonatomic) LPLinkMetadata metadata;
@property (nonatomic) BOOL hasFetchedSubresources;
@property (nonatomic) BOOL hasCompletedFetch;
- (id)metadata;
- (id)initWithCoder:;
- (void)setMetadata:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (void)setHasFetchedSubresources:;
- (BOOL)hasFetchedSubresources;
- (BOOL)hasCompletedFetch;
- (void)setHasCompletedFetch:;
+ (BOOL)supportsSecureCoding;
@end
