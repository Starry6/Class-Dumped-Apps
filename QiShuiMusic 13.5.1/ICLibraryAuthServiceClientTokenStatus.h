@interface ICLibraryAuthServiceClientTokenStatus : NSObject
@property (nonatomic) ICLibraryAuthServiceClientTokenResult tokenResult;
@property (nonatomic) NSError lastError;
@property (nonatomic) double lastUpdateAttemptTime;
@property (nonatomic) BOOL shouldExcludeFromBackgroundRefresh;
@property (nonatomic) NSDate lastUpdatedDate;
- (id)initWithCoder:;
- (id)lastUpdatedDate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setLastError:;
- (id)lastError;
- (id)tokenResult;
- (void)setTokenResult:;
- (double)lastUpdateAttemptTime;
- (void)setLastUpdateAttemptTime:;
- (BOOL)shouldExcludeFromBackgroundRefresh;
- (void)setShouldExcludeFromBackgroundRefresh:;
+ (BOOL)supportsSecureCoding;
@end
