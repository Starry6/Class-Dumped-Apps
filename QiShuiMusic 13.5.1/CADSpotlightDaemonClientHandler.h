@interface CADSpotlightDaemonClientHandler : NSObject
- (void)start;
- (void)reindexAllItemsForBundleID:protectionClass:acknowledgementHandler:;
- (void)reindexItemsWithIdentifiers:bundleID:protectionClass:acknowledgementHandler:;
- (void)provideDataForBundleID:protectionClass:itemIdentifier:typeIdentifier:options:completionHandler:;
- (void)provideFileURLForBundleID:protectionClass:itemIdentifier:typeIdentifier:options:completionHandler:;
- (id)textRepresentationForEvent:;
@end
