@interface AWEPrivacyKitThreadInfoUtil : NSObject
@property (nonatomic) NSMutableDictionary queueWhiteList;
@property (nonatomic) # timorThreadClass;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldSkipForQueue:;
- (BOOL)shouldSkip;
- (void)setQueueWhiteList:;
- (void)setTimorThreadClass:;
- (id)queueWhiteList;
- (Class)timorThreadClass;
- (void)addQueueToWhiteList:;
- (void).cxx_destruct;
+ (void)setCertToThread:forKey:;
+ (void)removeCertFromThread:forKey:;
+ (void)setInfo:withKey:;
+ (id)sharedInstance;
+ (id)getInfo:;
+ (void)removeInfo:;
@end
