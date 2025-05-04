@interface AWECloudCommandCache : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_detailInfoUnderPath:;
- (id)_detailInfoUnderPath:complianceMatched:;
- (id)_resultWithCommand:;
- (void)excuteCommand:completion:;
+ (id)createInstance;
@end
