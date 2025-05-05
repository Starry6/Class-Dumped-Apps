@interface IESSaaSTIMObjectDeallocedNotifier : NSObject
@property (nonatomic) <IESSaaSTIMObjectDeallocedNotifierDelegate> delegate;
@property (nonatomic) NSDictionary userInfo;
- (void)dealloc;
- (id)userInfo;
- (void)setDelegate:;
- (id)delegate;
- (void)setUserInfo:;
- (void).cxx_destruct;
@end
