@interface BDMannorGeckoResourceManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)mannorSettingDidChange;
- (id)init;
- (void)dealloc;
+ (void)clearResourceWithChannel:;
+ (id)geckoResourceWithPath:channel:;
+ (BOOL)hasGeckoResourceWithChannel:;
+ (void)loadGeckoResourceWithChannelList:;
+ (void)loadGeckoResourceWithScene:;
+ (id)sharedInstance;
@end
