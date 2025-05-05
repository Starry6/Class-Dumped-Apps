@interface AWEBaseViewModel : NSObject
@property (nonatomic) BOOL networkReachable;
@property (nonatomic) AWEPageStatusModel pageStatusModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pageStatusModel;
- (void)networkConnectionChanged:;
- (void)setPageStatusModel:;
- (void)setupNetworkReachableNotification;
- (void)updatePageStatusMessage:type:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)networkReachable;
- (BOOL)isNetworkReachable;
- (void)setNetworkReachable:;
+ (BOOL)isNetworkReachable;
@end
