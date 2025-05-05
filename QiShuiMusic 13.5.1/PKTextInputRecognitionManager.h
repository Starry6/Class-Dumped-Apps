@interface PKTextInputRecognitionManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray textInputTargets;
- (void)dealloc;
- (void).cxx_destruct;
- (void)queryDidUpdateResult:;
- (void)reportDebugStateDescription:;
- (id)textInputTargets;
- (id)strokeProviderSnapshot;
- (id)textInputTargetForItemStableIdentifier:strokeIdentifiers:;
- (void)fetchContentInfoForTextInputTarget:strokeIdentifiers:completion:;
- (id)textInputTargetForItemStableIdentifier:strokeIdentifiers:simultaneousItemStableIdentifiers:;
@end
