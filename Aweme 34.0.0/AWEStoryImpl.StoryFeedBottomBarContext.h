@interface AWEStoryImpl.StoryFeedBottomBarContext : NSObject
@property (nonatomic) NSDictionary liteTaskInfo;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) NSDictionary businessDict;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)logExtraDict;
- (id)enterFrom;
- (id)liteTaskInfo;
- (void)setLiteTaskInfo:;
- (id)businessDict;
- (void)setBusinessDict:;
- (id)init;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewController:;
- (id)previousPage;
- (void)setPreviousPage:;
@end
