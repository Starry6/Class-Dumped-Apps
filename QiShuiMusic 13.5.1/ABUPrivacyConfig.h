@interface ABUPrivacyConfig : NSObject
@property (nonatomic) NSMutableDictionary privacyMap;
@property (nonatomic) @? didUpdate;
- (id)privacyMap;
- (void)setPrivacyMap:;
- (id)init;
- (id)init_;
- (id)didUpdate;
- (void).cxx_destruct;
- (void)setDidUpdate:;
+ (id)privacyConfig;
+ (void)setPrivacyWithKey:andValue:;
+ (id)validValue:withKey:;
+ (id)sharedInstance;
@end
