@interface ISURLResourcePropertySpecification : NSObject
@property (nonatomic) NSArray otherProperties;
@property (nonatomic) NSArray iconInitWithURLProperties;
@property (nonatomic) NSSet allowedMissingProperties;
@property (nonatomic) NSArray generalProperties;
@property (nonatomic) NSArray applicationProperties;
@property (nonatomic) NSArray volumeProperties;
- (void).cxx_destruct;
- (id)_init;
- (id)iconInitWithURLProperties;
- (id)allowedMissingProperties;
- (id)generalProperties;
- (id)applicationProperties;
- (id)volumeProperties;
- (id)otherProperties;
+ (id)sharedInstance;
@end
