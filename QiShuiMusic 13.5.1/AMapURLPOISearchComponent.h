@interface AMapURLPOISearchComponent : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString product;
@property (nonatomic) NSString version;
@property (nonatomic) NSString userAgent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userAgent;
- (id)version;
- (id)name;
- (id)product;
+ (id)sharedInstance;
@end
