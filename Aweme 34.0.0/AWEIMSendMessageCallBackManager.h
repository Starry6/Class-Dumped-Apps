@interface AWEIMSendMessageCallBackManager : NSObject
@property (nonatomic) NSMutableDictionary callBackMaps;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)callBackMaps;
- (void)setCallBackMaps:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)bindCallBackTarget:sendMessageID:;
+ (void)callBackIfNeeded:error:;
+ (id)shared;
@end
