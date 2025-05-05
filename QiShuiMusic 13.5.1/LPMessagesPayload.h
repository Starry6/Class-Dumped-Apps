@interface LPMessagesPayload : NSObject
@property (nonatomic) LPLinkMetadata metadata;
@property (nonatomic) BOOL placeholder;
@property (nonatomic) BOOL needsSubresourceFetch;
@property (nonatomic) BOOL needsCompleteFetch;
- (BOOL)isPlaceholder;
- (id)metadata;
- (id)initWithCoder:;
- (void)setPlaceholder:;
- (void)setMetadata:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dataRepresentationWithOutOfLineAttachments:;
- (void)performSubstitutionWithAttachments:;
- (BOOL)needsCompleteFetch;
- (BOOL)_needsWorkaroundForAppStoreTransformerCrash;
- (BOOL)needsSubresourceFetch;
- (void)setNeedsSubresourceFetch:;
- (void)setNeedsCompleteFetch:;
+ (BOOL)supportsSecureCoding;
+ (id)linkWithDataRepresentationWithoutSubstitutingAttachments:;
+ (id)_linkWithDataRepresentation:substitutingAttachments:attachments:;
+ (id)linkWithDataRepresentation:attachments:;
@end
