@interface AWEFeedReplaceStrategy : NSObject
@property (nonatomic) AWEFeedReplaceVideosConfigModel configModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configModel;
- (void)setConfigModel:;
- (void)executeWithRequestExtraParams:;
- (void).cxx_destruct;
- (id)initWithConfigDict:;
+ (id)strategyClassList;
+ (id)createInstanceWithConfig:;
@end
