@interface BDUGLuckyCrossoverManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)onHandleLuckyDeepLinkEvent:;
+ (void)onReceiveLuckyDeepLinkEvent:;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
