@interface IMSyndicationUtilities : NSObject
@property (nonatomic) CKContainer ckContainer;
- (id)ckContainer;
- (void)setCkContainer:;
- (void).cxx_destruct;
- (id)bundleIDsForCollaborationURL:;
- (id)bundleIDsForShareBearURL:;
- (id)UTITypeForURL:;
- (id)_bundleIDsForCollaborationApp:;
- (id)_URLSchemeForCollaborationApp:;
- (unsigned long long)_collaborationAppForURL:;
- (id)_fetchCKBundleIDsForURL:returnLocalBundlesOnly:;
@end
