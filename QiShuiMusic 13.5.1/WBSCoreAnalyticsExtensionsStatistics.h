@interface WBSCoreAnalyticsExtensionsStatistics : NSObject
@property (nonatomic) Q enabledCount;
@property (nonatomic) Q disabledCount;
@property (nonatomic) NSArray telemetryDataForExtensions;
@property (nonatomic) BOOL hasExtensionThatCanOverrideNewTabPage;
@property (nonatomic) BOOL newTabPageIsOverridden;
- (unsigned long long)disabledCount;
- (unsigned long long)enabledCount;
- (void).cxx_destruct;
- (id)telemetryDataForExtensions;
- (id)initWithExtensionsList:extractDeveloperIdentifier:extractComposedIdentifier:extensionTelemetryDataPredicate:newTabPageIsOverridden:;
- (id)initWithExtensionsList:extractDeveloperIdentifier:extractComposedIdentifier:extensionTelemetryDataPredicate:;
- (BOOL)hasExtensionThatCanOverrideNewTabPage;
- (BOOL)newTabPageIsOverridden;
@end
