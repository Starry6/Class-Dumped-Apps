@interface ABUMediaAdStorage : NSObject
@property (nonatomic) NSMutableArray packages;
@property (nonatomic) NSString mediaRitId;
@property (nonatomic) @? changeCallback;
- (void)enumerateAdPackageUsingBlock:;
- (id)initWithMediaRitId:;
- (id)lookupDescription;
- (id)lookupPackageWithMatchingIndicator:reason:;
- (id)mediaRitId;
- (void)popPackage:reason:;
- (BOOL)pushPackage:;
- (void)setMediaRitId:;
- (id)init;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)packages;
- (void)setPackages:;
- (void)setChangeCallback:;
- (id)changeCallback;
@end
