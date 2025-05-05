@interface WBSCyclerConnectionManager : NSObject
@property (nonatomic) <WBSCyclerTestTarget> testTarget;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)connect;
- (id)testTarget;
- (id)initWithTestTarget:;
+ (unsigned long long)countOfEnabledCyclers;
+ (BOOL)isBookmarkCyclerEnabled;
+ (BOOL)isTabCyclerEnabled;
+ (BOOL)isExtensionCyclerEnabled;
@end
