@interface AWENearbySessionUtil : NSObject
@property (nonatomic) NSString appSession;
- (id)appSession;
- (void)setAppSession:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)generate32LengthSessionID;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
