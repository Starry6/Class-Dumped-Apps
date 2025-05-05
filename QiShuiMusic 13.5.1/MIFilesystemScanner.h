@interface MIFilesystemScanner : NSObject
@property (nonatomic) Q options;
@property (nonatomic) NSString personaUniqueString;
@property (nonatomic) <MIFilesystemScannerDelegate> delegate;
- (id)personaUniqueString;
- (id)init;
- (void)setDelegate:;
- (unsigned long long)options;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)_scanAppsDirectory:withError:;
- (BOOL)_scanFrameworkDirectory:withError:;
- (BOOL)_scanFrameworksLocationsWithError:;
- (BOOL)_scanBundleContainersWithClass:withError:ignoredErrorOccurredOnOneOrMoreItems:;
- (id)initWithScanOptions:personaUniqueString:;
- (id)initWithScanOptions:;
- (BOOL)performScanWithError:;
@end
