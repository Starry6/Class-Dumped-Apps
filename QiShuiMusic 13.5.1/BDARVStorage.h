@interface BDARVStorage : NSObject
@property (nonatomic) <BDARVInnerStorage> innerStorage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)innerStorage;
- (id)objectOfClass:forKey:;
- (void)setInnerStorage:;
- (void)setObject:forKey:;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (id)_userDefaults;
@end
