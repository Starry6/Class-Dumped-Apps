@interface WBSUISafariSandboxBroker : WBSSafariSandboxBroker
- (void)loadLinkPresentationMetdataForMessageWithGUID:completionHandler:;
- (void)getLinkMetadataForMessageWithGUID:completionHandler:;
@end
