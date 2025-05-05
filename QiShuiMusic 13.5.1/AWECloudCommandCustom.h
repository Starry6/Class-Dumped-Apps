@interface AWECloudCommandCustom : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)excuteCommand:completion:;
+ (id)createInstance;
@end
