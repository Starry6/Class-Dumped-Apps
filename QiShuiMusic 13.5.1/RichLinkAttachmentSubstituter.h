@interface RichLinkAttachmentSubstituter : NSObject
@property (nonatomic) NSMutableArray archivedAttachments;
@property (nonatomic) NSArray attachmentsForUnarchiving;
@property (nonatomic) BOOL shouldSubstituteAttachments;
@property (nonatomic) BOOL shouldIgnoreAppStoreMetadata;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)unarchiver:didDecodeObject:;
- (id)archiver:willEncodeObject:;
- (void).cxx_destruct;
- (id)applyAttachmentSubstitutionForObject:;
- (id)archivedAttachments;
- (id)attachmentsForUnarchiving;
- (void)setAttachmentsForUnarchiving:;
- (BOOL)shouldSubstituteAttachments;
- (void)setShouldSubstituteAttachments:;
- (BOOL)shouldIgnoreAppStoreMetadata;
- (void)setShouldIgnoreAppStoreMetadata:;
@end
