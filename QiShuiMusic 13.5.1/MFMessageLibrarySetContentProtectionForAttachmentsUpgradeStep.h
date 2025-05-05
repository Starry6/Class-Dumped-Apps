@interface MFMessageLibrarySetContentProtectionForAttachmentsUpgradeStep : NSObject
@property (nonatomic) NSURL baseAttachmentsDirectory;
- (void).cxx_destruct;
- (BOOL)performMigrationStep;
- (id)initWithBaseAttachmentsDirectory:;
- (id)baseAttachmentsDirectory;
+ (id)log;
@end
