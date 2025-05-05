@interface SFSearchViewAppearFeedback : SFFeedback
@property (nonatomic) Q viewAppearEvent;
@property (nonatomic) BOOL isOnLockScreen;
@property (nonatomic) BOOL isOverApp;
@property (nonatomic) BOOL readerTextAvailable;
@property (nonatomic) NSString preexistingInput;
@property (nonatomic) NSString originatingApp;
@property (nonatomic) BOOL isUsingLoweredSearchBar;
- (id)originatingApp;
- (void)setIsOnLockScreen:;
- (BOOL)readerTextAvailable;
- (void)setIsUsingLoweredSearchBar:;
- (id)initWithCoder:;
- (void)setReaderTextAvailable:;
- (unsigned long long)viewAppearEvent;
- (void)encodeWithCoder:;
- (void)setOriginatingApp:;
- (void)setViewAppearEvent:;
- (id)preexistingInput;
- (void).cxx_destruct;
- (void)setPreexistingInput:;
- (id)initWithEvent:;
- (BOOL)isOverApp;
- (void)setIsOverApp:;
- (BOOL)isUsingLoweredSearchBar;
- (BOOL)isOnLockScreen;
+ (BOOL)supportsSecureCoding;
@end
