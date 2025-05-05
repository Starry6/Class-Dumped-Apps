@interface INCExtensionRequest : NSObject
@property (nonatomic) NSExtension _extension;
@property (nonatomic) NSError _error;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSArray extensionInputItems;
@property (nonatomic) BOOL requiresTCC;
- (id)_error;
- (id)_extension;
- (id)identifier;
- (void)_resetExtensionContextHostWithCompletion:;
- (void)startRequestForIntent:completion:;
- (id)extensionInputItems;
- (BOOL)requiresTCC;
- (id)_extensionContextHost;
- (void)_setExtension:;
- (void).cxx_destruct;
- (void)setExtensionInputItems:;
- (void)reset;
- (id)_requestOperationQueue;
- (id)initWithIdentifier:;
- (void)_scheduleContextTimer;
- (void)_setError:;
- (void)_resetContextTimer;
- (void)setIdentifier:;
- (void)setRequiresTCC:;
@end
