@interface PFMetadataStateHandler : NSObject
- (void)dealloc;
- (id)stateDataWithHints:;
- (void).cxx_destruct;
- (id)initWithMetadata:;
- (id)_stateInformation;
- (void)addBreadcrumb:;
- (void)_addBreadcrumbWithTimeInterval:message:;
+ (id)redactedDescriptionForPath:;
+ (id)redactedDescriptionForFileURL:;
@end
