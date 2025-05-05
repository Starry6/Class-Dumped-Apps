@interface CTSweetgumAppsInfo : NSObject
@property (nonatomic) NSArray appsList;
@property (nonatomic) NSString appsURL;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)appsList;
- (void)setAppsList:;
- (id)appsURL;
- (void)setAppsURL:;
+ (BOOL)supportsSecureCoding;
@end
