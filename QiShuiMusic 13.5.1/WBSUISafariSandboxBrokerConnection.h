@interface WBSUISafariSandboxBrokerConnection : WBSSafariSandboxBrokerConnection
- (void)loadLinkPresentationMetdataForMessageWithGUID:completionHandler:;
- (void)getLinkMetadataForMessageWithGUID:completionHandler:;
@end
