@interface AWEHPChannelRegisterList : NSObject
@property (nonatomic) NSMutableDictionary channelTypeToConfig;
- (id)aAWEPadModuleAdapter;
- (id)aAWEPadSplitScreenAdapter;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;
- (id)aAWEFeedModuleServiceDOUYINAdaper;
- (id)getChannelConfigWithChannelType:;
- (BOOL)registerChannelWithConfig:;
- (id)aAWEHomepageChannelDOUYINHTSAdapter;
- (id)channelTypeToConfig;
- (void)setChannelTypeToConfig:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEFeedModuleServiceDOUYINAdaperClass;
+ (Class)aAWEHomepageChannelDOUYINHTSAdapterClass;
@end
