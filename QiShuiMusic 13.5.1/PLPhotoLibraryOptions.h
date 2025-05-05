@interface PLPhotoLibraryOptions : NSObject
@property (nonatomic) BOOL automaticallyMergesContext;
@property (nonatomic) BOOL refreshesAfterSave;
@property (nonatomic) BOOL automaticallyPinToFirstFetch;
@property (nonatomic) q requiredState;
@property (nonatomic) Q libraryRole;
@property (nonatomic) BOOL preventsWaitingForRequiredState;
@property (nonatomic) Q libraryInitiator;
- (id)init;
- (void)setRefreshesAfterSave:;
- (unsigned long long)libraryInitiator;
- (void)setRequiredState:;
- (void)setAutomaticallyMergesContext:;
- (unsigned long long)libraryRole;
- (BOOL)refreshesAfterSave;
- (id)initWithCoder:;
- (BOOL)preventsWaitingForRequiredState;
- (BOOL)automaticallyMergesContext;
- (BOOL)automaticallyPinToFirstFetch;
- (void)encodeWithCoder:;
- (void)setLibraryRole:;
- (void)setPreventsWaitingForRequiredState:;
- (long long)requiredState;
- (void)setLibraryInitiator:;
- (void)setAutomaticallyPinToFirstFetch:;
+ (BOOL)supportsSecureCoding;
@end
