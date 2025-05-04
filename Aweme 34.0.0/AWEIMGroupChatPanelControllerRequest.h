@interface AWEIMGroupChatPanelControllerRequest : NSObject
@property (nonatomic) q panelType;
@property (nonatomic) NSString createSource;
@property (nonatomic) NSDictionary trackDict;
@property (nonatomic) NSDictionary bizExtension;
@property (nonatomic) <AWEIMGroupChatPanelControllerDelegate> delegate;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (long long)panelType;
- (id)trackDict;
- (id)bizExtension;
- (id)initWithRouterParamDict:;
- (id)createSource;
- (id)initWithMethodModel:;
- (id)initWithJoinMethodModel:;
- (id)initWithSchoolGroupCreateGroupContext:;
- (long long)__actionType;
- (void)__checkRequiredParams;
- (id)initWithParams:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)requestAction;
@end
