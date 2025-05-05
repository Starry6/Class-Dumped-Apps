@interface BMDiscoverabilitySignalEvent : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString context;
@property (nonatomic) NSDictionary userInfo;
- (id)init;
- (id)userInfo;
- (id)context;
- (id)identifier;
- (id)initWithIdentifier:bundleID:context:userInfo:;
- (id)initWithIdentifier:bundleID:context:;
- (void).cxx_destruct;
- (id)description;
- (id)bundleID;
+ (id)new;
@end
